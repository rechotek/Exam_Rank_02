/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:03:13 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 15:05:49 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Liczy długość początkowego segmentu łańcucha s, który nie zawiera żadnego znaku z zestawu znaków reject

#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int x = 0;
	int y;

	while (s[x])
	{
		y = 0;
		while (reject[y])
		{
			if (reject[y] == s[x])
				return (x);
			y++;
		}
		x++;
	}
	return (x);
}

int main (void)
{
	char s[] = "abcdef12345";
	char reject[] = "123";
	printf("%zu\n", ft_strcspn(s, reject));
	return (0);
}