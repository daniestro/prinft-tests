/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_max_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:29:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 14:41:06 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_frm_tests.h"

void	test_int_overflow(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello!\n", 7);
	reset_output();
	test->res = ft_printf("%2147483648s\n", "Hello!");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
