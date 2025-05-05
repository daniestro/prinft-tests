/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:59:08 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 17:03:02 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PTR_TESTS_H
# define PTR_TESTS_H

# include "utils.h"

void	test_basic_ptr(t_test **results);
void	test_width_ptr(t_test **results);
void	test_precision_ptr(t_test **results);
void	test_overflow_ptr(t_test **results);
void	test_width_precision_ptr(t_test **results);
void	test_null_ptr(t_test **results);
void	test_null_width_ptr(t_test **results);

#endif
