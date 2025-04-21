/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fopen.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:38:15 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/22 00:00:44 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

char	*fopen_string(void)
{
	FILE	*file;
	char	*string;
	long	file_size;

	file = fopen(FILE_NAME, READ_BYTES);
	fseek(file, 0, SEEK_END);
	file_size = ftell(file);
	fseek(file, 0, SEEK_SET);
	string = malloc(file_size + 1);
	fread(string, file_size, 1, file);
	fclose(file);
	string[file_size] = 0;
	return (string);
}
