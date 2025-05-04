/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prc_equals_to_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:38:11 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 13:15:07 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prc_tests.h"

void	test_prc_equals_to_str(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World  Mundo\n", 19);
	reset_output();
	test->res = ft_printf("%4.5s %5.5s %6.5s\n",
		"Hello", "World", "Mundo");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
