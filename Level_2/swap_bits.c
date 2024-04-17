/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:42:48 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 18:45:07 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(void) {
    unsigned char octet = 0x13; // 0010 0110

    printf("Przed zamianą bitów: %02x\n", octet);
    octet = swap_bits(octet);
    printf("Po zamianie bitów: %02x\n", octet);

    return 0;
}