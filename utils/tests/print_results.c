/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:26:33 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 16:04:09 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*   Prints the results of the tests.                                        */
/*                                                                           */
/*   Iterates over  the given  result list.  Compares expected results and   */
/*   writes the number  of the test, its name, and its result:  Passed  or   */
/*   Failed.                                                                 */
/*                                                                           */
/*---------------------------------------------------------------------------*/

void	print_results(t_test *result)
{
	int	i;

	printf("========== Test Results ==========\n");
	i = 1;
	while (result)
	{
		printf(" Test %i - %s:\t%s\n", i, result->name,
		result->pass ? "✅ Passed" : "❌ Failed");
		if (result->pass == 0)
		{
			printf("Expected - output: %s, result: %d\n",
			result->exp_output, result->exp_res);
			printf("Received - output: %s, result: %d\n",
			result->output, result->res);
		}
		result = result->next;
		i++;
	}
}
