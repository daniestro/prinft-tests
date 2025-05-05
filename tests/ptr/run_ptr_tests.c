/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_ptr_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:59:44 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 17:03:24 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ptr_tests.h"

void	run_ptr_tests(t_test **results)
{
	test_basic_ptr(results);
	test_width_ptr(results);
	test_precision_ptr(results);
	test_overflow_ptr(results);
	test_width_precision_ptr(results);
	test_null_ptr(results);
	test_null_width_ptr(results);
}
