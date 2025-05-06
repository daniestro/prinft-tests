/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:29:20 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 16:35:20 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIGIT_TESTS_H
# define DIGIT_TESTS_H

# include "utils.h"

void	test_basic_digit(t_test **results);
void	test_space_digit(t_test **results);
void	test_plus_digit(t_test **results);
void	test_zero_digit(t_test **results);
void	test_width_digit(t_test **results);
void	test_precision_digit(t_test **results);
void	test_combined_digit(t_test **results);
void	test_zeros_precision_digit(t_test **results);
void	test_min_max_digit(t_test **results);
void	test_more_flags_digit(t_test **results);
void	test_more_flags_integer(t_test **results);

#endif
