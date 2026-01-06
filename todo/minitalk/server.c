/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:14:43 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/17 03:13:57 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"
#include <stdio.h>

int main()
{
	pid_t sv_pid;

	sv_pid = getpid();
	printf("%d", sv_pid);
	return(1);
}

