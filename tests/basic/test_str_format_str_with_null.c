/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_format_str_with_null.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:53:21 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:39:02 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

void	test_str_format_str_with_null(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n", 13);
	reset_output();
	test->res = ft_printf("Hello %s!\n", "World", NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
