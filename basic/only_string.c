/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 17:51:34 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "io_utils.h"
#include "test_utils.h"

void	only_string(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n");
	reset_output();
	printf("Hello World!\n");
	fflush(stdout);
	test->res = file_to_string();
	if (!test->res)
		test->pass = 0;
	else
		test->pass = (strcmp(test->exp_res, test->res) == 0);
	ft_testadd_back(results, test);
}
