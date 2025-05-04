/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:10:07 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 15:00:46 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "utils.h"

void	run_basic_tests(t_test **results);
void	run_frm_tests(t_test **results);
void	run_prc_tests(t_test **results);
void	run_inv_frm_tests(t_test **results);

#endif
