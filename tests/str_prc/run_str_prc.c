/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_str_prc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:44:24 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 19:31:01 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prc_tests.h"

void	run_prc_tests(t_test **results)
{
	test_prc_less_than_str(results);
	test_prc_equals_to_str(results);
	test_prc_more_than_str(results);
	test_prc_extra(results);
	test_prc_align(results);
	test_null_prc(results);
}
