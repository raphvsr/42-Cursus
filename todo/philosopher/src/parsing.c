/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <raphael.vasseur@proton.me>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:28:27 by rvasseur          #+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosopher.h"

static int	werror(char *msg)
{
	int	len;

	len = 0;
	while (msg[len])
		len++;
	write(2, msg, len);
	return (0);
}

static int	is_digit(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	validate(t_data *data, int argc)
{
	if (data->nb_philosophers < 1 || data->nb_philosophers > 200)
		return (werror("Error: invalid philosophers count (1 to 200)\n"));
	if (data->t_to_die <= 0 || data->t_to_eat <= 0 || data->t_to_sleep <= 0)
		return (werror("Error: timestamps must be strictly positive\n"));
	if (argc == 6 && data->nb_must_eat <= 0)
		return (werror("Error: meal count must be greater than 0\n"));
	return (1);
}

int	parsing(t_data *data, int argc, char **argv)
{
	int	i;

	if (argc < 5 || argc > 6)
	{
		werror("Error: wrong arguments count\n");
		return (
			werror("Usage: ./philo <nb_philos> <die> <eat> <sleep> [meals]\n"));
	}
	i = 1;
	while (i < argc)
	{
		if (!is_digit(argv[i]))
			return (werror("Error: arguments must be positive numbers only\n"));
		i++;
	}
	data->nb_philosophers = (int)ft_atol(argv[1]);
	data->t_to_die = ft_atol(argv[2]);
	data->t_to_eat = ft_atol(argv[3]);
	data->t_to_sleep = ft_atol(argv[4]);
	data->nb_must_eat = -1;
	if (argc == 6)
		data->nb_must_eat = (int)ft_atol(argv[5]);
	return (validate(data, argc));
}
