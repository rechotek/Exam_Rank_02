/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:30:52 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/13 18:44:42 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int x = 0;
	int sign = 1;
	int result = 0;

	while (str[x] == '\r' || str[x] == '\t' || str[x] == '\v' || str[x] == '\f' || str[x] == '\n' || str[x] == ' ')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = (result * 10) + (str[x] - '0');
		x++;
	}
	return (sign * result);
}

int	main(void)
{
	char	str[] = " 	\r\t\n \n -1234564314ab567";
	printf("Jest: %d\n", ft_atoi(str));
	return (0);
}