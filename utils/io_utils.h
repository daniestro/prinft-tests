/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:21:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 16:25:44 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_UTILS_H
# define IO_UTILS_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "test_struct.h"

# define WRITE "w"
# define FREOPEN_ERROR "freopen"
# define READ_BYTES "rb"
# define FILE_NAME "output.txt"
# define reset_output() freopen(FILE_NAME, WRITE, stdout)
# define duplicate_stdout_descriptor() dup(STDOUT_FILENO)
# define redirect_stdout_to(fd) dup2(fd, STDOUT_FILENO)

FILE	*stdout_to_file(void);
char	*file_to_string(void);
int		redirect_to_file(t_test **results, void (*func)(t_test **));

#endif
