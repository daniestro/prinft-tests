/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chr_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:04:09 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 12:41:35 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHR_TESTS_H
# define CHR_TESTS_H

# include "utils.h"

void	test_basic(t_test **results);
void	test_basic_aligned(t_test **results);
void	test_width(t_test **results);
void	test_ignore_flags(t_test **results);
void	test_null_eof(t_test **results);

#endif
