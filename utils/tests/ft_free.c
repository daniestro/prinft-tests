/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:25:44 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 13:12:01 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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
