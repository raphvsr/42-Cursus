/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 23:45:21 by rvasseur          #+#    #+#             */
/*   Updated: 2025/11/18 04:00:31 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		n;
	char	*stash;
    char    **lines;
    char    *line;
    size_t  i;
    
    i = 0;
	if (fd == -1)
		return (1);
	n = read(fd, buffer, BUFFER_SIZE);
	if (n <= 0)
		return (0);
    // stash = malloc()
    // lines = malloc()
    ft_strncpy(stash, buffer, n);
    if (ft_strchr(stash, 10) != 0)
        lines[i] = ft_split(stash, '\n');
}

