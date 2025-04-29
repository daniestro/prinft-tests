/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:25:44 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 15:56:29 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   Frees all dynamically allocated objects in                               */
/*   the results list of the tests.                                           */
/*                                                                            */
/*   Iterates over the given result list. For each test instance,  it saves   */
/*   a reference to the next element, frees the content of the current test   */
/*   instance and the instance itself, then proceeds to the next until done.  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

void	ft_free(t_test **result)
{
	t_test	*current;
	t_test	*next;

	if (result == NULL)
		return ;
	current = *result;
	while (current)
	{
		next = current->next;
		free(current->output);
		free(current);
		current = next;
	}
	free(result);
}
