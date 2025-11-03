/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:10:48 by marvin            #+#    #+#             */
/*   Updated: 2025/11/03 21:10:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    *ft_memset(void *ptr, int value, size_t size)
{
    size_t  i;
    unsigned char   *p;

    p = (unsigned char *)ptr;
    i = 0;
    for (i < size)
    {
        p[i] = (unsigned char) value;
        i++;
    }
    return (ptr);
}
