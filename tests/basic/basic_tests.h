/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:21:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:47:25 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_TESTS_H
# define BASIC_TESTS_H

# include "utils.h"

void	run_basic_tests(t_test **results);

void	test_empty_str(t_test **results);
void	test_not_valid_format(t_test **results);
void	test_null(t_test **results);
void	test_percents(t_test **results);
void	test_str_format_str_with_null(t_test **results);
void	test_str_format_str(t_test **results);
void	test_str_null(t_test **results);
void	test_str_with_eof(t_test **results);
void	test_str_with_null(t_test **results);
void	test_str(t_test **results);

#endif
