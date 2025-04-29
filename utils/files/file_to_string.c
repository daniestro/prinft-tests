/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:57:37 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 13:13:22 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   The  function returns  an string contatining the context  of the file.   */
/*                                                                            */
/*   It opens  the file and moves the file position indicator to the end to   */
/*   determine its size. Then it allocates memory for the string, reads the   */
/*   file into it, and adds a null terminator.                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

char	*file_to_string(void)
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
