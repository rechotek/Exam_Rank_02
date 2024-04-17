/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:25:21 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/15 20:35:04 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_atoi (char *str)
{
	unsigned int x = 0;
	unsigned int result = 0;

	while (str[x])
	{
		result = (result * 10) + (str[x] - '0');
		x++;
	}
	return (result);
}

void put_hex (int nbr)
{
	if (nbr >= 16)
		put_hex(nbr / 16);
	write (1, &"0123456789abcdef"[nbr%16], 1);
}

int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		put_hex(ft_atoi(argv[1]));
	}
	write (1, "\n", 1);
	return (0);
}