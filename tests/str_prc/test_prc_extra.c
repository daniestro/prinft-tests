/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prc_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:38:11 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 14:04:28 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prc_tests.h"

void	test_prc_extra(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World           \n", 23);
	reset_output();
	test->res = ft_printf("%0.005s %0.010s %010.s\n",
		"Hello", "World", "Mundo");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
