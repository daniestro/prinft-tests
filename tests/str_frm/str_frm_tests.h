/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_frm_tests.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:05:15 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 14:42:33 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_FTM_TESTS_H
# define STR_FTM_TESTS_H

# include "utils.h"

void	test_double(t_test **results);
void	test_double_with_null(t_test **results);
void	test_double_null(t_test **results);
void	test_min_width_less(t_test **results);
void	test_min_width_more(t_test **results);
void	test_min_width_more_aligned(t_test **results);
void	test_min_width_more_extra_aligned(t_test **results);
void	test_aligned(t_test **results);
void	test_flags(t_test **results);
void	test_int_overflow(t_test **results);

#endif
