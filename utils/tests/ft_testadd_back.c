/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:15:26 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 14:32:17 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*-------------------------------------------------------------------------*/
/*                                                                         */
/*   Adds a new instance to the end of the results list.                   */
/*                                                                         */
/*   Checks  that the given results list  is not NULL.  Then it iterates   */
/*   through all instances  in the list to reach the last one,  and sets   */
/*   its 'next' pointer to the new instance. If the list is empty (i.e.,   */
/*   points to NULL), it sets the new instance as the first element.       */
/*                                                                         */
/*-------------------------------------------------------------------------*/


void	ft_testadd_back(t_test **test, t_test *new)
{
	t_test	*current;

	if (test == NULL)
		return ;
	if (*test == NULL)
	{
		*test = new;
		return ;
	}
	current = *test;
	while (current->next)
		current = current->next;
	current->next = new;
}
