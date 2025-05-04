/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:06:28 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 15:11:29 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_frm_tests.h"

void	test_flags(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World   !\n", 16);
	reset_output();
	test->res = ft_printf("%  0-+ 0-+ #+-0.0000123456789s %0+++  0## # # 0-- ---8.01000s!\n", "Hello", "World");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
