/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:46:48 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "io_utils.h"
#include "test_utils.h"

void	only_string(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n", 13);
	reset_output();
	test->res = printf("Hello World!\n");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
