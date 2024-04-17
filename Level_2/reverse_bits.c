/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:31:17 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 18:47:09 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				x = 8;
	unsigned char	result = 0;

	while (x > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		x--;
	}
	return (result);
}

// alternatywne rozwiaznie
// unsigned char	reverse_bits(unsigned char octet)
// {
// 	return (((octet >> 0) & 1) << 7) | \
// 			(((octet >> 1) & 1) << 6) | \
// 			(((octet >> 2) & 1) << 5) | \
// 			(((octet >> 3) & 1) << 4) | \
// 			(((octet >> 4) & 1) << 3) | \
// 			(((octet >> 5) & 1) << 2) | \
// 			(((octet >> 6) & 1) << 1) | \
// 			(((octet >> 7) & 1) << 0);
// }

int main(void)
{
	unsigned char original = 10; // 10101010
	unsigned char reversed = reverse_bits(original); // Oczekiwana wartość to 85 (01010101)

	printf("Odwrócone bity: %d\n", reversed);

	return (0);
}