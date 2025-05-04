/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_prc_tests.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:36:59 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 19:30:52 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_PRC_TESTS_H
# define STR_PRC_TESTS_H

#include "utils.h"

void	test_prc_less_than_str(t_test **results);
void	test_prc_equals_to_str(t_test **results);
void	test_prc_more_than_str(t_test **results);
void	test_prc_extra(t_test **results);
void	test_prc_align(t_test **results);
void	test_null_prc(t_test **results);

#endif
