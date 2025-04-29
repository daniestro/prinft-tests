/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:15:26 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 11:15:26 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void ft_testadd_back(t_test **test, t_test *new)
{
    t_test *current;

    if (test == NULL)
        return;
    if (*test == NULL)
    {
        *test = new;
        return;
    }
    current = *test;
    while (current->next)
        current = current->next;
    current->next = new;
}