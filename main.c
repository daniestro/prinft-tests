/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/25 18:39:20 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_utils.h"
#include "basic_tests.h"
#include "test_utils.h"

void	start_tests(t_test **results)
{
	// Basic
	only_string(results);
	with_null(results);
	string_with_string(results);
	string_with_string_none(results);
	just_null(results);
	empty(results);
	eof(results);
	string_with_null(results);
	percents(results);
	not_exist_command(results);
}

int	main(void)
{
	t_test	**results;

	results = malloc(sizeof(t_test));
	redirect_to_file(results, start_tests);
	print_results(*results);
	ft_free(results);
	return (0);
}
