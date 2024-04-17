/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:50:24 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 15:51:52 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		write (1, &str[x], 1);
		x++;
	}
}

int main (void)
{
	char str[] = "Essa mordo!";
	ft_putstr(str);
	return (0);
}