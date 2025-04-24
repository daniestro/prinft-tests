/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:21:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 20:07:29 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_TESTS_H
# define BASIC_TESTS_H

# include "test_struct.h"

void	only_string(t_test **results);
void	with_null(t_test **results);
void	string_with_string(t_test **results);
void	string_with_string_none(t_test **results);
void	just_null(t_test **results);
void	empty(t_test **results);
void	eof(t_test **results);
void	string_with_null(t_test **results);

#endif
