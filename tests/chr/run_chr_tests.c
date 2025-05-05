/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_chr_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:05:08 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 13:32:06 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chr_tests.h"

void	run_chr_tests(t_test **results)
{
	test_basic(results);
	test_basic_aligned(results);
	test_width(results);
	test_ignore_flags(results);
}
