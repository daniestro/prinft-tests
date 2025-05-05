/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 15:12:05 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static int	is_zone(const char *zone, const char *test_zone_name)
{
	if (!strcmp(zone, test_zone_name) || !strcmp(zone, "all"))
		return (1);
	return (0);
}

void	start_tests(t_test **results, char *zone)
{
	if (is_zone(zone, "basic"))
		run_basic_tests(results);
	if (is_zone(zone, "strfrm"))
		run_frm_tests(results);
	if (is_zone(zone, "strprc"))
		run_prc_tests(results);
	if (is_zone(zone, "strinvfrm"))
		run_inv_frm_tests(results);
	if (is_zone(zone, "chr"))
		run_chr_tests(results);
	if (is_zone(zone, "ptr"))
		run_ptr_tests(results);
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
