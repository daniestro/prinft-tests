/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_null_prc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:29:14 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 19:38:37 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prc_tests.h"

void	test_null_prc(t_test **results)
{
	t_test	*test;

	test = ft_testnew("                      (null)              \n", 43);
	reset_output();
	test->res = ft_printf("%-20.3s %-.3s %-20s\n", NULL, NULL, NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
