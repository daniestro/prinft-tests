/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:21:47 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/06 15:48:23 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

# define WRITE "w"
# define FREOPEN_ERROR "freopen"
# define READ_BYTES "rb"
# define FILE_NAME "output.txt"
# define reset_output() freopen(FILE_NAME, WRITE, stdout)
# define duplicate_stdout_descriptor() dup(STDOUT_FILENO)
# define redirect_stdout_to(fd) dup2(fd, STDOUT_FILENO)

typedef struct	s_test
{
	const char	*name;
	char		*exp_output;
	int			exp_res;
	char		*output;
	int			res;
	int			pass;
	struct s_test *next;
}	t_test;

int		ft_printf(const char *str, ...);

FILE	*stdout_to_file(void);
char	*file_to_string(void);
int		redirect_to_file(t_test **results, char *zone, void (*func)(t_test **, char *));

t_test	*testnew(char *exp_output, int exp_res, const char *file_name);
# define	ft_testnew(exp_output, exp_res) testnew(exp_output, exp_res, __func__)

void	ft_testadd_back(t_test **test, t_test *new);
void	ft_free(t_test **result);
void	print_results(t_test *result);
int		cmpres(t_test *test);

#endif
