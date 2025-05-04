/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prc_align.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:38:11 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 14:00:07 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prc_tests.h"

void	test_prc_align(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hel World  Mundo \n", 18);
	reset_output();
	test->res = ft_printf("%2.3s %-6.5s %---6.7s\n",
		"Hello", "World", "Mundo");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
