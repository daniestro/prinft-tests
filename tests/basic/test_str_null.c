/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:03:39 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:39:23 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

void	test_str_null(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n", 13);
	reset_output();
	test->res = ft_printf("Hello World!\n", NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
