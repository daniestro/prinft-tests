/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:53:48 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 15:57:26 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_inv_frm_tests.h"

void	test_prc(t_test **results)
{
	t_test	*test;

	test = ft_testnew("%+-.0.s\n", 8);
	reset_output();
	test->res = ft_printf("%+ -..s\n", "World!", "Mundo!");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
