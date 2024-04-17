/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:54:10 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 17:02:35 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
	unsigned int x = 0;
	unsigned int result;

	if (len == 0)
		return (0);
	result = tab[x];
	while (x < len)
	{
		if (result < tab[x])
			result = tab[x];
		x++;
	}
	return (result);
}

int main (void)
{
	int tab[] = {10, 5, 8, 20, 45};
	unsigned int len = sizeof(tab) / sizeof(tab[0]);
	printf("Maksymalna wartosc to: %d\n", max(tab, len));
	return (0);
}
