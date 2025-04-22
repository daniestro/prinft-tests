/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_without_parameters.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/22 17:58:19 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_utils.h"

int	test_hello_world(void)
{
	char	*string;
	int		result;

	reset_output();
	printf("Hello World!\n");
	fflush(stdout);
	string = file_to_string();
	if (!string)
		return (0);
	result = (strcmp(string, "Hello World!\n") == 0);
	free(string);
	return (result);
}
