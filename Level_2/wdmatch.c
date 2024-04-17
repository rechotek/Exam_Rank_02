/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:52:19 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 18:03:29 by mrechuli         ###   ########.fr       */
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

	if (argc == 3)
	{
		x = 0;
		y = 0;
		z = 0;
		while (argv[1][x] && argv[2][y])
		{
			if (argv[1][x] == argv[2][y])
				x++;
			y++;
		}
		while (argv[1][z])
			z++;
		if (z == x)
		{
			x = 0;
			while (argv[1][x])
			{
				write (1, &argv[1][x], 1);
				x++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}