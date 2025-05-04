/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:56:14 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 15:51:19 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_inv_frm_tests.h"

void	test_numbers(t_test **results)
{
	t_test	*test;

	test = ft_testnew("%-9 s %.10 s\n", 13);
	reset_output();
	test->res = ft_printf("%- 9 s %.10 s\n", "World!", "Mundo!");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
