/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:12:05 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 18:20:55 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_frm_tests.h"

void	test_double(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello! World! Mundo!\n", 21);
	reset_output();
	test->res = ft_printf("Hello!%s%s\n", " World!", " Mundo!");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
