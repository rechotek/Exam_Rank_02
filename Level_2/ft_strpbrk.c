/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:49:50 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 15:12:51 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// szuka pierwszego wystapienia ktoregos ze znaku s2 w stringu s1 i zwraca do niego pointer.

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	x = 0;
	int y;

	if (!s1 || !s2)
		return (NULL);
	while (s1[x])
	{
		y = 0;
		while (s2[y])
		{
			if (s1[x] == s2[y])
				return ((char *)&s1[x]);
			y++;
		}
		x++;
	}
	return (NULL);
}

int main (void)
{
	const char s1[] = "abcdefghijk";
	const char s2[] = "zwg";
	char *result = ft_strpbrk (s1, s2);
	printf ("Pierwszy pasujacy znak to: %c\n", *result);
	return (0);
}