/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prc_more_than_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:38:11 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 13:49:21 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prc_tests.h"

void	test_prc_more_than_str(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello  World  Mundo  World\n", 27);
	reset_output();
	test->res = ft_printf("%5.6s %6.7s %6.6s %6.7s\n",
		"Hello", "World", "Mundo", "World");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
