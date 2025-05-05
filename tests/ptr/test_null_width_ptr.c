/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_null_width_ptr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:01:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 17:13:13 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ptr_tests.h"

void	test_null_width_ptr(t_test **results)
{
	t_test	*test;

	test = ft_testnew("ptr <(nil)  >\n", 14);
	reset_output();
	test->res = ft_printf("ptr <%---7p>\n", NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
