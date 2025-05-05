/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ignore_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:33:18 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 12:35:58 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chr_tests.h"

void	test_ignore_flags(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello!\n", 7);
	reset_output();
	test->res = ft_printf("%+##+   +1c%     .c%.c% +-----  ##c%0.0c!\n", 'H', 'e', 'l', 'l', 'o');
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
