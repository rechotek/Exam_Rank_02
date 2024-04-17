/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:35:18 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 16:53:18 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int x = 0;

	if (argc == 2)
	{
		while (argv[1][x])
			x++;
		x--;
		while (argv[1][x] == ' ' || argv[1][x] == '\t' || argv[1][x] == '\0')
			x--;
		while (argv[1][x] != ' ' && argv[1][x] != '\t')
			x--;
		x++;
		while (argv[1][x] != ' ' && argv[1][x] != '\t' && argv[1][x] != '\0')
			{
				write (1, &argv[1][x], 1);
				x++;
			}
	}
	write (1, "\n", 1);
	return (0);
}