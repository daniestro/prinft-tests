/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_basic_ptr.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:00:45 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 15:08:51 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ptr_tests.h"

void	test_basic_ptr(t_test **results)
{
	t_test	*test;

	test = ft_testnew("ptr <0x4020c0>\n", 15);
	reset_output();
	test->res = ft_printf("ptr <%p>\n", 4202688);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
