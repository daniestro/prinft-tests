/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:10:26 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 16:21:55 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_inv_frm_tests.h"

void	test_inv_flags(t_test **results)
{
	t_test	*test;

	test = ft_testnew("%#+-", -1);
	reset_output();
	test->res = ft_printf("%+#+ + + ----", "World!");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
