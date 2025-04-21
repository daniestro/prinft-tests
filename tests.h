/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:21:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/22 00:46:34 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define WRITE "w"
#define FREOPEN_ERROR "freopen"
#define READ_BYTES "rb"
#define FILE_NAME "output.txt"
#define clear(fp) freopen(FILE_NAME, WRITE, fp)

FILE	*fstart_writing(void);
char	*fopen_string(void);
void	reset_output(void);

#endif
