/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/04 15:00:53 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	start_tests(t_test **results, char *zone)
{
	if (!strcmp(zone, "basic"))
		run_basic_tests(results);
	if (!strcmp(zone, "strfrm"))
		run_frm_tests(results);
	if (!strcmp(zone, "strprc"))
		run_prc_tests(results);
	if (!strcmp(zone, "strinvfrm"))
		run_inv_frm_tests(results);
}

int	main(int argc, char **argv)
{
	t_test	**results;
	char	*zone;

	results = malloc(sizeof(t_test));
	zone = argv[argc - 1];
	redirect_to_file(results, zone, start_tests);
	print_results(*results);
	ft_free(results);
	return (0);
}
