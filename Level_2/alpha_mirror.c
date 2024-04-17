/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:49:50 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 18:04:27 by mrechuli         ###   ########.fr       */
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
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
				argv[1][x] = 'z' - argv[1][x] + 'a';
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
				argv[1][x] = 'Z' - argv[1][x] + 'A';
			write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}