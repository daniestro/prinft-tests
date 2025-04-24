/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_with_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:53:21 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:30:48 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"
#include "io_utils.h"
#include "test_utils.h"

void	string_with_string(t_test **results)
{
	t_test	*test;

	test = ft_testnew("Hello World!\n");
	reset_output();
	test->res = printf("Hello %s!\n", "World");
	fflush(stdout);
	test->output = file_to_string();
	test->pass = cmpres(test);
	ft_testadd_back(results, test);
}
