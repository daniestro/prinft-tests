/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_combined_digit.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:49:01 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 20:03:58 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_combined_digit(t_test **results)
{
	t_test	*test;

	test = ft_testnew("-00123    +00000123!\n", 22);
	reset_output();
	test->res = ft_printf("%- 0 ++ 10.5d%+ + + 09d!\n", -123, 123);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
