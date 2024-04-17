/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:37:49 by mrechuli          #+#    #+#             */
/*   Updated: 2024/04/17 18:58:40 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nie do konca rozumiem jak to powinno dzialac. w sensie rozumiem to co napisane, ale nie jest przekonany czy to o to chodzi

#include <stdio.h>

int isvalid (int ch, int baselen)
{
	char *lcbase = "0123456789abcdef";
	char *ucbase = "0123456789ABCDEF";
	int x = 0;

	while (x < baselen)
	{
		if (ch == lcbase[x] || ch == ucbase[x])
			return (1);
		x++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int sign = 1;
	int x = 0;
	int result = 0;

	while (str[x] == ' ' || str[x] == '\r' || str[x] == '\t' || str[x] == '\v' || str[x] == '\f' || str[x] == '\n')
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] && isvalid(str[x], str_base))
	{
		result *= str_base;
		if (str[x] >= '0' && str[x] <= '9')
			result += str[x] - '0';
		else if (str[x] >= 'a' && str[x] <= 'f')
			result += str[x] - 'a' + 10;
		else if (str[x] >= 'A' && str[x] <= 'F')
			result += str[x] - 'A' + 10;
		x++;
	}
	return (result * sign);
}

int main (void)
{
	char str[] = "12edb3";
	int str_base = 2;
	printf("%d", ft_atoi_base(str, str_base));
	return (0);
}