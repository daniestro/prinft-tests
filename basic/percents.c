/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percents.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:03:39 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/25 17:51:17 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "utils.h"
#include "test_utils.h"

void percents(t_test **results)
{
	t_test *test;

	test = ft_testnew("%%\n", 3);
	reset_output();
	test->res = ft_printf("%%%\n");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
