/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:12:57 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:29:13 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STRUCT_H
# define TEST_STRUCT_H

# include <stdlib.h>

typedef struct s_test
{
	const char		*name;
	char			*exp_output;
	int				exp_res;
	char			*output;
	int				res;
	int				pass;
	struct s_test	*next;
}	t_test;

#endif
