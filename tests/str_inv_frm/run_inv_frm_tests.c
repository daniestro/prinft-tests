/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_inv_frm_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:45:19 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 16:15:10 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_inv_frm_tests.h"

void	run_inv_frm_tests(t_test **results)
{
	test_numbers(results);
	test_prc(results);
	test_inv_flags(results);
}
