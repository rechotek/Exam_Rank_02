/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:56:13 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 16:02:05 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s2[x])
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	return (s1);
}

int main (void)
{
	char s2[] = "Essunia mordziunia";
	char s1[35];
	ft_strcpy(s1, s2);
	printf("Skopiowany ciag: %s\n", s2);
	return (0);
}