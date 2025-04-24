/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:59:42 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/24 13:51:45 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_struct.h"
#include "io_utils.h"

void	ft_testadd_back(t_test **test, t_test *new)
{
	t_test	*current;

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

t_test	*ft_testnew(void)
{
	t_test	*test;

	test = malloc(sizeof(t_test));
	if (test == NULL)
		return (NULL);
	return (test);
}
