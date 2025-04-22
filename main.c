/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/22 18:03:38 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_utils.h"
#include "basic_tests.h"

int	main(void)
{
	int	org_stdout_fd;
	int	result1;

	org_stdout_fd = duplicate_stdout_descriptor();
	if (stdout_to_file() == NULL)
	{
		redirect_stdout_to(org_stdout_fd);
		return (1);
	}
	result1 = test_hello_world();
	redirect_stdout_to(org_stdout_fd);
	close(org_stdout_fd);
	printf("=== Test Results ===\n");
	printf("Test 1: %s\n", result1 ? "✅ Passed" : "❌ Failed");
	return (0);
}
