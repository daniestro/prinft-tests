/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_with_null.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:53:21 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 20:10:02 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "io_utils.h"
#include "test_utils.h"

void	string_with_null(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello (null)!\n", 14);
	reset_output();
	test->res = printf("Hello %s!\n", NULL);
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
