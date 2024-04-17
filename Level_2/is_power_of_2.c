/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:22:41 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 16:30:38 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sprawdza czy dana liczba jest potega liczby 2

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return (0);
}

int main (void)
{
	int n = 2049;
	printf ("Wynik to: %d\n", is_power_of_2(n));
	return (0);
}