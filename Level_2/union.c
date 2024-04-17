/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:31:22 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 17:51:21 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int x;
	int y;
	int z;
	int p;

	x = 0;
	y = 0;
	if (argc == 3)
	{
		while (argv[1][x])
		{
			z = x - 1;
			p = 0;
			while (z >= 0)
			{
				if (argv[1][x] == argv[1][z])
				{
					p = 1;
					break;
				}
				z--;
			}
			if (p == 0)
				write (1, &argv[1][x], 1);
			x++;
		}
		while (argv[2][y])
		{
			x = 0;
			while (argv[1][x])
				x++;
			x--;
			p = 0;
			while (x >= 0)
			{
				if (argv[2][y] == argv[1][x])
				{
					p = 1;
					break ;
				}
				x--;
			}
			z = y - 1;
			while (z >= 0)
			{
				if (argv[2][y] == argv[2][z])
				{
					p = 1;
					break ;
				}
				z--;
			}
			if (p == 0)
				write (1, &argv[2][y], 1);
			y++;
		}
	}
	write (1, "\n", 1);
	return (0);
}