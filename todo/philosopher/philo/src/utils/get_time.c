/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   get_time.c                               :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: p0ubelle <p0ubelle@student.42.fr>#+#  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:16:30 by p0ubelle#+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../philosopher.h"

long	get_time(void)
{
	struct timeval	tv;

	if (gettimeofday(&tv, NULL) == -1)
		return (write(2, "Error: gettimeofday failed\n", 27), 0);
	return ((tv.tv_sec * 1000) + (tv.tv_usec / 1000));
}

void	ft_usleep(long ms, t_data *data)
{
	long	start_time;

	start_time = get_time();
	while ((get_time() - start_time) < ms)
	{
		if (data && is_stopped(data))
			break ;
		usleep(500);
	}
}
