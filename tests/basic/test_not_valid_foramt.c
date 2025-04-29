/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_not_valid_foramt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:03:39 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:37:29 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

void	test_not_valid_format(t_test **results)
{
	t_test	*test;

	test = ft_testnew("%k\n", 3);
	reset_output();
	test->res = ft_printf("%k\n");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
