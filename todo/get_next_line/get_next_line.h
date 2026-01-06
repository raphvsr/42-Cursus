/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 01:01:07 by rvasseur          #+#    #+#             */
/*   Updated: 2025/11/18 03:13:49 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFFER_SIZE 5
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strchr(const char *string, int searchedChar);
char	**ft_split(char const *s, char c);

#endif