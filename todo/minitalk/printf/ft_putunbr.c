/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:33:47 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/06 00:53:43 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunbr(unsigned int n)
{
	size_t	size;

	size = 0;
	if (n >= 10)
		size += ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (size + 1);
}
