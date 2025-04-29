/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:59:42 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 13:11:17 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

// The function adds to the given t_test structure an element to the next.
// If it is not initialized sets to the new instance.
t_test	*testnew(char *exp_output, int exp_res, const char *func_name)
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (test == NULL)
		return (NULL);
	test->name = func_name;
	test->exp_output = exp_output;
	test->exp_res = exp_res;
	test->output = NULL;
	test->next = NULL;
	test->pass = 0;
	return (test);
}
