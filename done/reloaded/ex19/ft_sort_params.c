/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:20:33 by rvasseur          #+#    #+#             */
/*   Updated: 2025/11/05 19:38:48 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}

int	main(int argc, char *argv[])
{
	int	i;
    int j;

	i = 1;
    j = 1;
	while (i < argc)
	{
        while (j < argc)
        {
            ft_strcmp(argv[i], argv[j]);
        }
        ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
