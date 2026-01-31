/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:03:56 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/06 01:16:12 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ptr(unsigned long n)
{
	char	*base;
	size_t	size;

	base = "0123456789abcdef";
	size = 0;
	if (n >= 16)
		size += ft_ptr(n / 16);
	ft_putchar(base[n % 16]);
	return (size + 1);
}

size_t	ft_putptr(void *ptr)
{
	size_t	size;

	if (!ptr)
		return (ft_putstr("(nil)"));
	size = 0;
	size += ft_putchar('0');
	size += ft_putchar('x');
	size += ft_ptr((unsigned long)ptr);
	return (size);
}
