/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   with_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:03:39 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 17:51:16 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "io_utils.h"
#include "test_utils.h"

void	with_null(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n");
	reset_output();
	printf("Hello World!\n", NULL);
	fflush(stdout);
	test->res = file_to_string();
	if (!test->res)
		test->pass = 0;
	else
		test->pass = (strcmp(test->exp_res, test->res) == 0);
	ft_testadd_back(results, test);
}
