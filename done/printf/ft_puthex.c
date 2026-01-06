/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:16:12 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/06 00:51:32 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex(unsigned int n, int IsUpper)
{
	char	*b;
	size_t	size;

	size = 0;
	if (IsUpper)
		b = "0123456789ABCDEF";
	else
		b = "0123456789abcdef";
	if (n >= 16)
		size += ft_puthex(n / 16, IsUpper);
	ft_putchar(b[n % 16]);
	return (size + 1);
}
