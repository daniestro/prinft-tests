/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_zero_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:39:04 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 13:59:54 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_zero_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("-0123 +0123!\n", 13);
	reset_output();
	test->res = ft_printf("%   0+++5d % 0++++5d!\n", -123, 123);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
