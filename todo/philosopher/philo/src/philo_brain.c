/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_brain.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <raphael.vasseur@proton.me>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:17:10 by rvasseur          #+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

int	init_data(t_data *data)
{
	int	i;

	data->simulation_stop = 0;
	data->philos = malloc(sizeof(t_philo) * data->nb_philosophers);
	if (!data->philos)
		return (0);
	data->forks = malloc(sizeof(pthread_mutex_t) * data->nb_philosophers);
	if (!data->forks)
		return (free(data->philos), 0);
	pthread_mutex_init(&data->print_mutex, NULL);
	pthread_mutex_init(&data->stop_mutex, NULL);
	i = 0;
	while (i < data->nb_philosophers)
	{
		pthread_mutex_init(&data->forks[i], NULL);
		pthread_mutex_init(&data->philos[i].meal_mutex, NULL);
		data->philos[i].data = data;
		data->philos[i].id = i + 1;
		data->philos[i].left_fork = &data->forks[i];
		data->philos[i].right_fork = &data->forks[(i + 1)
			% data->nb_philosophers];
		data->philos[i].meals_eaten = 0;
		i++;
	}
	return (1);
}

int	start_thread(t_data *data)
{
	int	i;

	i = 0;
	data->start_time = get_time();
	while (i < data->nb_philosophers)
	{
		data->philos[i].last_meal = data->start_time;
		if (pthread_create(&data->philos[i].thread, NULL,
				&philo_routine, &data->philos[i]) != 0)
			return (0);
		i++;
	}
	return (1);
}

void	stop_thread(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nb_philosophers)
	{
		pthread_join(data->philos[i].thread, NULL);
		i++;
	}
}
