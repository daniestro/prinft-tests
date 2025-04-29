/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:59:42 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 14:42:42 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   Creates a new instance of the t_test structure and sets the values       */
/*   to their default values.                                                 */
/*                                                                            */
/*   If memory is successfully allocated, sets every variable to its          */
/*   default value:                                                           */
/*                                                                            */
/*   - name       ->   given func_name;                                       */
/*   - exp_output ->   given exp_output;                                      */
/*   - exp_res    ->   given exp_res;                                         */
/*   - output     ->   NULL;                                                  */
/*   - next       ->   NULL;                                                  */
/*   - pass       ->   0;                                                     */
/*                                                                            */
/*   Returns the created instance.                                            */
/*                                                                            */
/*----------------------------------------------------------------------------*/


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
