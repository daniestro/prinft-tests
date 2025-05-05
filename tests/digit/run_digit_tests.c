/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_digit_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:29:52 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 19:49:26 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "digit_tests.h"

void	run_digit_tests(t_test **results)
{
	test_basic_digit(results);
	test_space_digit(results);
	test_plus_digit(results);
	test_zero_digit(results);
	test_width_digit(results);
	test_precision_digit(results);
	test_combined_digit(results);
}
