/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_min_width_less.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:38:11 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 18:41:25 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_frm_tests.h"

void	test_min_width_less(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n", 13);
	reset_output();
	test->res = ft_printf("Hello%1s!\n", "World");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
