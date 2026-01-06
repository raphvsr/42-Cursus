/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvasseur <rvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 23:17:09 by rvasseur          #+#    #+#             */
/*   Updated: 2025/12/05 19:54:23 by rvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define KMAG "\x1B[35m"
#define KNOR "\x1B[37m"
#define KGRN "\x1B[32m"
#define BGRED "\x1b[31m"
#define BGGRN "\x1b[35m"

int	main(int argc, char const *argv[])
{
	system("clear");
	printf(KMAG "\n[printf]\n");
	printf(KNOR);
	int res1a = printf("hey %c %c %c", 'c', '0', '1'); // c
	int res1b = printf("hey %c %c %c", 'c', '0', '1'); // c

	int res1aft = ft_printf("hey %c %c %c", 'c', '0', '1'); // c
	int res1bft = ft_printf("hey %c %c %c", '0', '0', '0'); // c

	int res2a = printf("foweifiwue%%zdwijdw"); // %
	int res2aft = ft_printf("foweifiwue%%zdwijdw"); // %

	int res3a = printf("hey %s", "string"); // s
	int res3aft = ft_printf("hey %s", "string"); // s

	// int res3b = printf("hey %s", NULL); // s
	// int res3bft = ft_printf("hey %s", NULL); // s

	int res4a = printf("%d", -5435435); // d
	int res4aft = ft_printf("%d", -5435435); // d

	int res5a = printf("%i", -5435435); // i
	int res5aft = ft_printf("%i", -5435435); // i

	printf("\n\n%d // %d", res4a, res4aft);
	(res1a == res1aft) ? printf(BGGRN "\n %%[OK]") : printf(BGRED "\n %%[KO]");

	(res1b == res1bft) ? printf(BGGRN "[OK]") : printf(BGRED "[KO]");

	(res2a == res2aft) ? printf(BGGRN "\n c[OK]") : printf(BGRED "\n c[KO]");

	(res3a == res3aft) ? printf(BGGRN "\n s[OK]") : printf(BGRED "\n s[KO]");

	// (res3b == res3bft) ? printf(BGGRN "[OK]") : printf(BGRED "[KO]");

	(res4a == res4aft) ? printf(BGGRN "\n d[OK]") : printf(BGRED "\n d[KO]");

	(res5a == res5aft) ? printf(BGGRN "\n i[OK]") : printf(BGRED "\n i[KO]");

	return (0);
}
