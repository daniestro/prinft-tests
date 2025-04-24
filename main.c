/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 14:13:56 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_utils.h"
#include "basic_tests.h"

void	start_tests(t_test **results)
{
	only_string(results);
}

int	redirect_to_file(t_test **results, void (*func)(t_test **))
{
	int		org_stdout_fd;

	org_stdout_fd = duplicate_stdout_descriptor();
	if (stdout_to_file() == NULL)
	{
		redirect_stdout_to(org_stdout_fd);
		return (1);
	}
	func(results);
	redirect_stdout_to(org_stdout_fd);
	close(org_stdout_fd);
	return (0);
}

void	print_results(t_test *result)
{
	int	i;

	printf("=== Test Results ===\n");
	i = 1;
	while (result)
	{
		printf("Test %i: %s\n", i, (result)->pass ? "✅ Passed" : "❌ Failed");
		if (result->pass == 0)
		{
			printf("Expected: %s\n", result->exp_res);
			printf("Recieved: %s\n", result->res);
		}
		result = result->next;
		i++;
	}
}

int	main(void)
{
	t_test	**results;

	results = malloc(sizeof(t_test));
	redirect_to_file(results, start_tests);
	print_results(*results);
	return (0);
}
