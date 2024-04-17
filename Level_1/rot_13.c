/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:05:59 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 17:15:15 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
	int x = 0;

	if (argc == 2)
	{
		while (argv[1][x])
		{
			if ((argv[1][x] >= 'a' && argv[1][x] <= 'm') || (argv[1][x] >= 'A' && argv[1][x] <= 'M'))
			{
				argv[1][x] = argv[1][x] + 13;
				write (1, &argv[1][x], 1);
			}
			else if ((argv[1][x] >= 'n' && argv[1][x] <= 'z') || (argv[1][x] >= 'N' && argv[1][x] <= 'Z'))
			{
				argv[1][x] = argv[1][x] - 13;
				write (1, &argv[1][x], 1);
			}
			else
				write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}