/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_basic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:06:54 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 12:18:32 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chr_tests.h"

void	test_basic(t_test **results)
{
	t_test	*test;

	test = ft_testnew("h e l!\n", 7);
	reset_output();
	test->res = ft_printf("%c %c %c!\n", 'h', 'e', 'l');
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
