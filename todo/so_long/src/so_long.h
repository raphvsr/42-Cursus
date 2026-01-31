/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 20:22:36 by rvasseur          #+#    #+#             */
/*   Updated: 2026/01/30 21:28:05 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_game
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	**map;
	int		player_count;
	int		collect_count;
	int		exit_count;
	int		plr_x;
	int		plr_y;
	int		map_x;
	int		map_y;
	int		moves_count;
}			t_game;

typedef struct s_img
{
	void	*img_wall;
	void	*img_floor;
	void	*img_player;
	void	*img_collect;
	void	*img_exit;
	int		img_width;
	int		img_height;
}			t_img;

int			check_map(t_game *game, char *f_path);
int			check_components(t_game *game);
int			check_wall(t_game *game);
int			check_rect(t_game *game);
int			check_extension(char *filename);
void		map_tab(t_game *game, char *f_path);
void		rm_newline(char *line);
int			main(int argc, char *argv[]);
void		get_x_y(t_game *game, char *f_path);
int			ft_strcmp(char *s1, char *s2);
int			map_validate(t_game *game);

#endif
