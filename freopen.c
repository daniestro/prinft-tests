/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freopen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:20:05 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/22 00:46:13 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

FILE	*fstart_writing(void)
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

void	reset_output(void)
{
	freopen(FILE_NAME, WRITE, stdout);
}
