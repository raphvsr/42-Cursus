/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 21:29:57 by rvasseur          #+#    #+#             */
/*   Updated: 2026/01/30 19:54:52 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_game	game;
	int		valid;

	valid = 0;

	if (argc != 2)
		return (-1);
	ft_memset(&game, 0, sizeof(t_game));
	valid = check_map(&game, argv[1]);
	printf("\nwidth: %d\nheight : %d\ncollectible : %d\nvalid : %d\n\n",
		game.map_x, game.map_y, game.collect_count, valid);

	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (-1);
	win_ptr = mlx_new_window(mlx_ptr, 700, 500, "so_long");

	mlx_loop(win_ptr);

	return (0);
}
