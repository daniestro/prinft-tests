/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 13:51:14 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_utils.h"
#include "basic_tests.h"

int	main(void)
{
	int		org_stdout_fd;
	int		i;
	t_test	**results;

	results = malloc(sizeof(t_test));
	org_stdout_fd = duplicate_stdout_descriptor();
	if (stdout_to_file() == NULL)
	{
		redirect_stdout_to(org_stdout_fd);
		return (1);
	}
	only_string(results);
	redirect_stdout_to(org_stdout_fd);
	close(org_stdout_fd);
	printf("=== Test Results ===\n");
	i = 1;
	while (*results)
	{
		printf("Test %i: %s\n", i, (*results)->pass ? "✅ Passed" : "❌ Failed");
		*results = (*results)->next;
		i++;
	}
	return (0);
}
