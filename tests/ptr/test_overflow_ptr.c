/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_overflow_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:47:10 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 15:48:30 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ptr_tests.h"

void	test_overflow_ptr(t_test **results)
{
	t_test	*test;

	test = ft_testnew("ptr <0xffbfdf40>\n", 17);
	reset_output();
	test->res = ft_printf("ptr <%p>\n", -4202688);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
