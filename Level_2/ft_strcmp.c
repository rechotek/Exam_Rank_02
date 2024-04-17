/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:52:48 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 18:57:52 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int    ft_strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}

int main (void)
{
	char s1[] = "abcd";
	char s2[] = "abca";
	printf ("%d\n", ft_strcmp(s1, s2));
	return (0);
}