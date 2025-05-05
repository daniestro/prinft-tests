/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpres.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:27:33 by dkalgano          #+#    #+#             */
/*   Updated: 2025/05/05 13:31:23 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*--------------------------------------------------------------------------*/
/*                                                                          */
/*   Checks whether the expected result equals the actual result.           */
/*                                                                          */
/*   Expects that the input is not NULL, then compares string and integer   */
/*   results.  Returns 0 on success,  or 1 if they are not equal.           */
/*                                                                          */
/*--------------------------------------------------------------------------*/

int	cmpres(t_test *test)
{
	int	output_equals;
	int	res_equals;

	if (test->output == NULL)
		return (0);
	if (test->exp_output == NULL)
		printf("Recieved exp_output as null\n");
	output_equals = (strcmp(test->exp_output, test->output) == 0);
	res_equals = (test->exp_res == test->res);
	return (output_equals && res_equals);
}
