/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   reaper.c                                 :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: p0ubelle <p0ubelle@student.42.fr>#+#  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 05:13:32 by p0ubelle#+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

static int	check_death(t_philo *philo)
{
	long	now;

	pthread_mutex_lock(&philo->meal_mutex);
	now = get_time();
	if (now - philo->last_meal >= philo->data->t_to_die)
	{
		pthread_mutex_lock(&philo->data->print_mutex);
		pthread_mutex_lock(&philo->data->stop_mutex);
		philo->data->simulation_stop = 1;
		pthread_mutex_unlock(&philo->data->stop_mutex);
		printf("%ld %d died\n", now - philo->data->start_time, philo->id);
		pthread_mutex_unlock(&philo->data->print_mutex);
		pthread_mutex_unlock(&philo->meal_mutex);
		return (1);
	}
	pthread_mutex_unlock(&philo->meal_mutex);
	return (0);
}

static int	check_all_full(t_data *data)
{
	int	i;
	int	full;

	if (data->nb_must_eat == -1)
		return (0);
	full = 0;
	i = 0;
	while (i < data->nb_philosophers)
	{
		pthread_mutex_lock(&data->philos[i].meal_mutex);
		if (data->philos[i].meals_eaten >= data->nb_must_eat)
			full++;
		pthread_mutex_unlock(&data->philos[i].meal_mutex);
		i++;
	}
	if (full == data->nb_philosophers)
	{
		pthread_mutex_lock(&data->stop_mutex);
		data->simulation_stop = 1;
		pthread_mutex_unlock(&data->stop_mutex);
		return (1);
	}
	return (0);
}

void	reaper(t_data *data)
{
	int	i;

	while (!is_stopped(data))
	{
		i = 0;
		while (i < data->nb_philosophers)
		{
			if (check_death(&data->philos[i]))
				return ;
			i++;
		}
		if (check_all_full(data))
			return ;
		usleep(1000);
	}
}
