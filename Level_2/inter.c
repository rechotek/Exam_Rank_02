/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:00:43 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 16:22:10 by mrechuli         ###   ########.fr       */
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

	if (argc == 3)
	{
		x = 0;
		while(argv[1][x])
		{
			y = 0;
			while (argv[2][y])
			{
				if (argv[1][x] == argv[2][y])
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
					{
						write (1, &argv[1][x], 1);
						break;
					}
				}
				y++;
			}
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}