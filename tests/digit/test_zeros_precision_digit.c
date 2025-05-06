/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_zeros_precision_digit.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:41:15 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 15:39:16 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_zeros_precision_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("  !\n", 4);
	reset_output();
	test->res = ft_printf("%.d % .0d!\n", 0, 0);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
