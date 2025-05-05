/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:21:40 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 12:26:32 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chr_tests.h"

void	test_width(t_test **results)
{
	t_test	*test;

	test = ft_testnew("    h          e l  !\n", 22);
	reset_output();
	test->res = ft_printf("%5c %10.c %-3c!\n", 'h', 'e', 'l');
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
