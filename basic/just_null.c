/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:58:18 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/25 15:47:11 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

void just_null(t_test **results)
{
	t_test *test;

	test = ft_testnew("", -1);
	reset_output();
	test->res = ft_printf(NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
