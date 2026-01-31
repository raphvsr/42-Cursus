/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 02:21:50 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/06 01:13:44 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	handle_args(char symb, va_list args)
{
	if (symb == 'd' || symb == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (symb == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	if (symb == 'x')
		return (ft_puthex(va_arg(args, int), 0));
	if (symb == 'X')
		return (ft_puthex(va_arg(args, int), 1));
	if (symb == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (symb == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (symb == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (symb == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		arg_len;

	if (!str)
		return (-1);
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
			arg_len = ft_putchar(*str);
		else
			arg_len = handle_args(*++str, args);
		if (arg_len >= 0)
			len += arg_len;
		else
			len = arg_len;
		str++;
	}
	return (va_end(args), len);
}
