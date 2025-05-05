/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_null_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:52:27 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 16:54:33 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ptr_tests.h"

void	test_null_ptr(t_test **results)
{
	t_test	*test;

	test = ft_testnew("ptr <(nil)>\n", 12);
	reset_output();
	test->res = ft_printf("ptr <%p>\n", NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
