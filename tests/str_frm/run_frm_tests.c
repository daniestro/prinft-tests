/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_frm_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:08:08 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 18:48:10 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_frm_tests.h"

void	run_frm_tests(t_test **results)
{
	test_double(results);
	test_double_with_null(results);
	test_double_null(results);
	test_min_width_less(results);
	test_min_width_more(results);
}
