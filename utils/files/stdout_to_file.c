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

#include "utils.h"

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   Redirets stdout to a file and returns the corresponding file pointer.    */
/*                                                                            */
/*   It opens  the file in write mode using stdout as the target stream. If   */
/*   redirection fails, it prints an error and returns NULL.                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

FILE *stdout_to_file(void)
{
    FILE *file_pointer;

    file_pointer = freopen(FILE_NAME, WRITE, stdout);
    if (file_pointer == NULL)
    {
        perror(FREOPEN_ERROR);
        return (NULL);
    }
    return (file_pointer);
}