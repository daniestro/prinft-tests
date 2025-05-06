/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_more_flags_integer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:54:28 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 16:34:54 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	test_more_flags_integer(t_test **results)
{
	t_test	*test;

	test = ft_testnew("  +00042 | -042  |       0000 | -00001     |       -99999\n", 58);
	reset_output();
	test->res = ft_printf("%+++08.5i | %- 05.3i | % 0  10.4i | %+0-10.5i | %+0 12.5i\n", 42, -42, 0, -1, -99999);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
