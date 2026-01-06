/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:20:23 by rvasseur          #+#    #+#             */
/*   Updated: 2026/01/05 17:05:10 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void	n_terminator(int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		kill(pid, SIGUSR1);
		usleep(100);
		i++;
	}
}

int	main(int ac, char **av)
{
	pid_t	sv_pid;
	int		i;
	int		j;

	if (ac != 3)
		return (0);
	sv_pid = ft_atoi(av[1]);
	i = 0;
	j = 0;
	while (av[2][i])
	{
		while (j < 8)
		{
			if ((av[2][i] >> j) & 1)
				kill(sv_pid, SIGUSR2);
			else
				kill(sv_pid, SIGUSR1);
			usleep(100);
			j++;
		}
		i++;
	}
	n_terminator(sv_pid);
	return (1);
}
