/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:38:15 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 16:24:45 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io_utils.h"

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   Redirets stdout to a file and returns the corresponding file pointer.    */
/*                                                                            */
/*   It opens  the file in write mode using stdout as the target stream. If   */
/*   redirection fails, it prints an error and returns NULL.                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

FILE	*stdout_to_file(void)
{
	FILE	*file_pointer;

	file_pointer = freopen(FILE_NAME, WRITE, stdout);
	if (file_pointer == NULL)
	{
		perror(FREOPEN_ERROR);
		return (NULL);
	}
	return (file_pointer);
}

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

int	redirect_to_file(t_test **results, void (*func)(t_test **))
{
	int		org_stdout_fd;

	org_stdout_fd = duplicate_stdout_descriptor();
	if (stdout_to_file() == NULL)
	{
		redirect_stdout_to(org_stdout_fd);
		return (1);
	}
	func(results);
	redirect_stdout_to(org_stdout_fd);
	close(org_stdout_fd);
	return (0);
}
