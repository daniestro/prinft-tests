/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_zeros_digit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 18:18:56 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 18:21:56 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_zeros_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("0 0!\n", 5);
	reset_output();
	test->res = ft_printf("%d %d!\n", 0, 0);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
