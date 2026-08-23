/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::   */
/*   main.c                                   :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: p0ubelle <p0ubelle@student.42.fr>#+#  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 08:16:30 by p0ubelle#+#    #+#             */
/*   Updated: 2026/08/23 08:33:33 by p0ubell###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (!parsing(&data, argc, argv))
		return (1);
	if (!init_data(&data))
	{
		write(2, "Error: failed to initialize simulation\n", 39);
		return (1);
	}
	if (!start_thread(&data))
	{
		write(2, "Error: failed to create threads\n", 32);
		cleanup(&data);
		return (1);
	}
	reaper(&data);
	stop_thread(&data);
	cleanup(&data);
	return (0);
}
