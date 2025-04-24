/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   with_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:03:39 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:31:03 by dkalgano         ###   ########.fr       */
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
	test->res = printf("Hello World!\n", NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
