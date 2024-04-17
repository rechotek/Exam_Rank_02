/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:13:19 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 15:24:45 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// zamienia string w miejscu, np. abcd -> dcba

char    *ft_strrev(char *str)
{
	int 	x = 0;
	int 	y = 0;
	char	tmp;

	while (str[x])
		x++;
	while (y < x / 2)
	{
		tmp = str[y];
		str[y] = str[x - 1 - y];
		str[x - 1 - y] = tmp;
		y++;
	}
	return (str);
}

int main (void)
{
	char str[] = "abcdef";
	printf("Po zamianie: %s\n", ft_strrev(str));
	return (0);
}