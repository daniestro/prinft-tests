/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_with_eof.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:54:08 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:39:31 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

void	test_str_with_eof(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello", 5);
	reset_output();
	test->res = ft_printf("Hello\0World!\n");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
