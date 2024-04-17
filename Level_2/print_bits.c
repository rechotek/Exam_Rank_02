/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:04:19 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 18:48:29 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int 			x = 8;
	unsigned char	bit;

	while (x--)
	{
		bit = (octet >> x & 1) + '0';
		write (1, &bit, 1);
	}
}

int main (void)
{
	unsigned char octet = 15;
	print_bits(octet);
	return (0);
}