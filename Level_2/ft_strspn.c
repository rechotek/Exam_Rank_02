/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:30:42 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 16:00:02 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Liczy długość początkowego segmentu łańcucha s, który zawiera znaki z zestawu znaków accept


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int x = 0;
	int y;
	int check;

	while (s[x])
	{
		y = 0;
		check = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
				check++;
			y++;
		}
		if (check == 0)
			return (x);
		x++;
	}
	return (x);
}

int main (void)
{
	char s[] = "abccbaaaaadefsadabcc";
	char accept[] = "abcdf";
	printf("Wynik to: %zu\n", ft_strspn(s, accept));
	return (0);
}
