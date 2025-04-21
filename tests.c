/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 00:01:31 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/22 00:52:46 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	test_hello_world(void)
{
	char	*string;
	int		result;

	reset_output();
	printf("Hello World!\n");
	fflush(stdout);
	string = fopen_string();
	if (!string)
		return (0);
	result = (strcmp(string, "Hello World!\n") == 0);
	free(string);
	return (result);
}

int	test_second_case(void)
{
	char	*string;
	int		result;

	reset_output();
	printf("Second test!\n");
	fflush(stdout);
	string = fopen_string();
	if (!string)
		return (0);
	result = (strcmp(string, "Second test!\n") == 0);
	free(string);
	return (result);
}

int	main(void)
{
	int	original_stdout;
	int	result1;
	int	result2;

	original_stdout = dup(STDOUT_FILENO);
	if (fstart_writing() == NULL)
	{
		dup2(original_stdout, STDOUT_FILENO);
		perror("freopen");
		return (1);
	}
	result1 = test_hello_world();
	result2 = test_second_case();
	dup2(original_stdout, STDOUT_FILENO);
	close(original_stdout);
	printf("=== Test Results ===\n");
	printf("Test 1: %s\n", result1 ? "✅ Passed" : "❌ Failed");
	printf("Test 2: %s\n", result2 ? "✅ Passed" : "❌ Failed");
	return (0);
}
