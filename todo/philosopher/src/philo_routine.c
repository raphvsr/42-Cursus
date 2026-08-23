/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <raphael.vasseur@proton.me>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 06:06:36 by rvasseur          #+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

static void	take_forks(t_philo *philo)
{
	if (philo->id % 2 == 0)
	{
		pthread_mutex_lock(philo->right_fork);
		print_mutex(philo, "has taken a fork");
		pthread_mutex_lock(philo->left_fork);
		print_mutex(philo, "has taken a fork");
	}
	else
	{
		pthread_mutex_lock(philo->left_fork);
		print_mutex(philo, "has taken a fork");
		pthread_mutex_lock(philo->right_fork);
		print_mutex(philo, "has taken a fork");
	}
}

static void	eat_and_sleep(t_philo *philo)
{
	take_forks(philo);
	pthread_mutex_lock(&philo->meal_mutex);
	philo->last_meal = get_time();
	philo->meals_eaten++;
	pthread_mutex_unlock(&philo->meal_mutex);
	print_mutex(philo, "is eating");
	ft_usleep(philo->data->t_to_eat, philo->data);
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
	print_mutex(philo, "is sleeping");
	ft_usleep(philo->data->t_to_sleep, philo->data);
}

void	*philo_routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	if (philo->data->nb_philosophers == 1)
	{
		print_mutex(philo, "has taken a fork");
		ft_usleep(philo->data->t_to_die, philo->data);
		return (NULL);
	}
	if (philo->id % 2 == 0)
		ft_usleep(philo->data->t_to_eat / 2, philo->data);
	while (!is_stopped(philo->data))
	{
		eat_and_sleep(philo);
		print_mutex(philo, "is thinking");
		if (philo->data->nb_philosophers % 2 != 0)
			ft_usleep(1, philo->data);
	}
	return (NULL);
}
