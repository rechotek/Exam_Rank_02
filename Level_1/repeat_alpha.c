/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:32:12 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 16:47:19 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
	int x = 0;
	int repeat;

	if (argc == 2)
	{
		while (argv[1][x])
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z') 
			{
				repeat = argv[1][x] - 'a' + 1;
				while (repeat > 0)
				{
					write (1, &argv[1][x], 1);
					repeat--;
				}
				x++;
			}
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				repeat = argv[1][x] - 'A' + 1;
				while (repeat > 0)
				{
					write (1, &argv[1][x], 1);
					repeat--;
				}
				x++;
			}
			else
			{
				write (1, &argv[1][x], 1);
				x++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}