/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:29:20 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 19:49:16 by dkalgano         ###   ########.fr       */
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

#endif
