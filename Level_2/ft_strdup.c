/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:26:31 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/14 14:42:38 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		x = 0;
	int		y = 0;
	char	*copy;

	while (src[x])
		x++;
	copy = malloc(sizeof(char) * (x + 1));
	if (copy == NULL)
		return (NULL);
	while (src[y])
	{
		copy[y] = src[y];
		y++;
	}
	copy[y] = '\0';
	return (copy);
}

int main(void)
{
    char *src = "Hello";
    char *copy = ft_strdup(src);
	printf("%s\n", copy);
    free(copy);
    return 0;
}