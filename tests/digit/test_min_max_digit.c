/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_min_max_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:46:46 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 15:49:45 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_min_max_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("-2147483648     +2147483647\n", 28);
	reset_output();
	test->res = ft_printf("%--+ 0 15.10d %0+ 12.0d\n", INT_MIN, INT_MAX);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
