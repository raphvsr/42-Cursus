/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factioral.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:56:42 by rvasseur          #+#    #+#             */
/*   Updated: 2025/11/05 18:56:45 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
