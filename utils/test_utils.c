/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:59:42 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:44:05 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_struct.h"
#include "io_utils.h"

void	ft_testadd_back(t_test **test, t_test *new)
{
	t_test	*current;

	if (test == NULL)
		return ;
	if (*test == NULL)
	{
		*test = new;
		return ;
	}
	current = *test;
	while (current->next)
		current = current->next;
	current->next = new;
}

t_test	*testnew(char *exp_output, int exp_res, const char *func_name)
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (test == NULL)
		return (NULL);
	test->name = func_name;
	test->exp_output = exp_output;
	test->exp_res = exp_res;
	test->output = NULL;
	test->next = NULL;
	test->pass = 0;
	return (test);
}

void	ft_free(t_test **result)
{
	t_test	*current;
	t_test	*next;

	if (result == NULL)
		return ;
	current = *result;
	while (current)
	{
		next = current->next;
		free(current->output);
		free(current);
		current = next;
	}
	free(result);
}

void	print_results(t_test *result)
{
	int	i;

	printf("========== Test Results ==========\n");
	i = 1;
	while (result)
	{
		printf(" Test %i - %s:\t%s\n", i, result->name, result->pass ? "✅ Passed" : "❌ Failed");
		if (result->pass == 0)
		{
			printf("Expected - output: %s, result: %d\n", result->exp_output, result->exp_res);
			printf("Received - output: %s, result: %d\n", result->output, result->res);
		}
		result = result->next;
		i++;
	}
}

int	cmpres(t_test *test)
{
	int	output_equals;
	int	res_equals;

	if (test->output == NULL)
		return (0);
	if (test->exp_output == NULL)
		printf("Recieved exp_output as null\n");
	output_equals = (strcmp(test->exp_output, test->output) == 0);
	res_equals = (test->exp_res == test-> res);
	return  (output_equals && res_equals);
}
