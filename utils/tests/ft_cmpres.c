/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpres.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:27:33 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 11:27:33 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int cmpres(t_test *test)
{
	int output_equals;
	int res_equals;

	if (test->output == NULL)
		return (0);
	if (test->exp_output == NULL)
		printf("Recieved exp_output as null\n");
	output_equals = (strcmp(test->exp_output, test->output) == 0);
	res_equals = (test->exp_res == test->res);
	return (output_equals && res_equals);
}
