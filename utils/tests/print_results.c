/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_results.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:26:33 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 12:58:49 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
