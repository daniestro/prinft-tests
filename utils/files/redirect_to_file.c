/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_to_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalgano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:58:42 by dkalgano          #+#    #+#             */
/*   Updated: 2025/04/29 17:54:00 by dkalgano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*----------------------------------------------------------------------------*/
/*                                                                            */
/*   Opens a session for a given function, redirecting the standard output    */
/*   to a file during its execution. After the function completes, restores   */
/*   the original output back to the terminal.                                */
/*                                                                            */
/*   Returns 0 on success, or 1 if an error occurs.                           */
/*                                                                            */
/*----------------------------------------------------------------------------*/

int	redirect_to_file(t_test **results, char *zone, void (*func)(t_test **, char *))
{
	int	org_stdout_fd;

	org_stdout_fd = duplicate_stdout_descriptor();
	if (stdout_to_file() == NULL)
	{
		redirect_stdout_to(org_stdout_fd);
		return (1);
	}
	func(results, zone);
	redirect_stdout_to(org_stdout_fd);
	close(org_stdout_fd);
	return (0);
}
