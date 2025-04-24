/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:59:42 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 18:50:58 by dkalgano         ###   ########.fr       */
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

t_test	*testnew(char *exp_res, const char *func_name)
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (test == NULL)
		return (NULL);
	test->name = func_name;
	test->exp_res = exp_res;
	test->res = NULL;
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
		free(current->res);
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
			printf("Expected: %s\n", result->exp_res);
			printf("Recieved: %s\n", result->res);
		}
		result = result->next;
		i++;
	}
}

int	cmpres(t_test *test)
{
	if (test->res == NULL)
		return (0);
	return (strcmp(test->exp_res, test->res) == 0);
}
