/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   just_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:58:18 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:31:35 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "io_utils.h"
#include "test_utils.h"

void	just_null(t_test **results)
{
	t_test	*test;

	test = ft_testnew("");
	reset_output();
	test->res = printf(NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
