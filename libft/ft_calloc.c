/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:42:15 by rvasseur          #+#    #+#             */
/*   Updated: 2025/11/17 16:48:34 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned char *ptr;

	if (elementCount != 0 && elementSize > UCHAR_MAX / elementCount)
		return (NULL);
	ptr = malloc(elementCount * elementSize);
	if (!ptr)
		return (NULL);

	ft_bzero(ptr, elementCount * elementSize);
	return (ptr);
}