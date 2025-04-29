/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_basics.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:41:14 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:47:30 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

void	run_basic_tests(t_test **results)
{
	test_empty_str(results);
	test_not_valid_format(results);
	test_null(results);
	test_percents(results);
	test_str_format_str_with_null(results);
	test_str_format_str(results);
	test_str_null(results);
	test_str_with_eof(results);
	test_str_with_null(results);
	test_str(results);
}
