/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_min_width_less copy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:38:11 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 18:47:37 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_frm_tests.h"

void	test_min_width_more(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello     World!\n", 17);
	reset_output();
	test->res = ft_printf("Hello%10s!\n", "World");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
