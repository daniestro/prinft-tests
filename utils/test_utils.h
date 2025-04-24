/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:36:33 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 19:37:20 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_UTILS_H
# define TEST_UTILS_H

# include "test_struct.h"

t_test	*testnew(char *exp_output, int exp_res, const char *file_name);
# define ft_testnew(exp_output, exp_res) testnew(exp_output, exp_res, __func__)

void	ft_testadd_back(t_test **test, t_test *new);
void	ft_free(t_test **result);
void	print_results(t_test *result);
int		cmpres(t_test *test);

#endif
