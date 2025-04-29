/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/25 15:47:18 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "utils.h"
#include "test_utils.h"

void only_string(t_test **results)
{
	t_test *test;

	test = ft_testnew("Hello World!\n", 13);
	reset_output();
	test->res = ft_printf("Hello World!\n");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
