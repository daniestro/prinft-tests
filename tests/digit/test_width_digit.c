/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_width_digit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:42:09 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 19:43:26 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_width_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("      -123 123       !\n", 23);
	reset_output();
	test->res = ft_printf("%10d %-10d!\n", -123, 123);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
