/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_precision_digit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:46:13 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 19:47:50 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_precision_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("-00000123 0000000123!\n", 22);
	reset_output();
	test->res = ft_printf("%.8d %.10d!\n", -123, 123);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
