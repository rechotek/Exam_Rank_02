/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:44:01 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 17:48:45 by mrechuli         ###   ########.fr       */
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
				argv[1][x] -= 32;
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
				argv[1][x] += 32;
			write (1, &argv[1][x], 1);
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}