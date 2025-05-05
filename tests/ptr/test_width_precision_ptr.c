/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_width_precision_ptr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:30:33 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 17:01:06 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ptr_tests.h"

void	test_width_precision_ptr(t_test **results)
{
	t_test	*test;

	test = ft_testnew("ptr <0x0000004020c0 >\n", 22);
	reset_output();
	test->res = ft_printf("ptr <%-15.12p>\n", 4202688);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
