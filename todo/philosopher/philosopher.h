/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   philosopher.h                            :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: p0ubelle <p0ubelle@student.42.fr>#+#  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:16:30 by p0ubelle#+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_data	t_data;
typedef struct s_philo
{
	int				id;
	pthread_t		thread;
	long			last_meal;
	int				meals_eaten;
	pthread_mutex_t	meal_mutex;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	t_data			*data;
}	t_philo;
struct s_data
{
	int				nb_philosophers;
	long			t_to_die;
	long			t_to_eat;
	long			t_to_sleep;
	int				nb_must_eat;
	long			start_time;
	int				simulation_stop;
	pthread_mutex_t	stop_mutex;
	pthread_mutex_t	print_mutex;
	pthread_mutex_t	*forks;
	t_philo			*philos;
};
/* Utils */
/* Init & Parsing */
/* Routine & Monitor */

long	ft_atol(char *str);
long	get_time(void);
void	ft_usleep(long ms, t_data *data);
int		is_stopped(t_data *data);
void	print_mutex(t_philo *philo, char *status);
void	cleanup(t_data *data);
int		parsing(t_data *data, int argc, char **argv);
int		init_data(t_data *data);
int		start_thread(t_data *data);
void	stop_thread(t_data *data);
void	*philo_routine(void *arg);
void	reaper(t_data *data);

#endif
