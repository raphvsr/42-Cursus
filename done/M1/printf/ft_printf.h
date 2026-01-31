/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 02:22:06 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/06 01:06:50 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
size_t	ft_putstr(char *s);
size_t	ft_putchar(int c);
size_t	ft_strlen(char *str);
size_t	ft_putnbr(int n);
size_t	ft_putunbr(unsigned int n);
size_t	ft_puthex(unsigned int n, int IsUpper);
size_t	ft_putptr(void *ptr);

#endif
