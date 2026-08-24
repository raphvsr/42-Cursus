/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   print_mutex.c                            :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: p0ubelle <p0ubelle@student.42.fr>#+#  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:16:30 by p0ubelle#+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../philosopher.h"

int	is_stopped(t_data *data)
{
	int	stop;

	pthread_mutex_lock(&data->stop_mutex);
	stop = data->simulation_stop;
	pthread_mutex_unlock(&data->stop_mutex);
	return (stop);
}

void	print_mutex(t_philo *philo, char *status)
{
	long	timestamp;

	pthread_mutex_lock(&philo->data->print_mutex);
	if (!is_stopped(philo->data))
	{
		timestamp = get_time() - philo->data->start_time;
		printf("%ld %d %s\n", timestamp, philo->id, status);
	}
	pthread_mutex_unlock(&philo->data->print_mutex);
}
