/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:03:19 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 17:02:02 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// liczy sume wszystkich liczb pierwszych przed  dana liczba, wraz z nia
 
#include <unistd.h>

int ft_atoi (char *s)
{
    int x = 0;
    int result = 0;

    while (s[x])
	{
		result = (result * 10) + (s[x] - '0');
		x++;
	}
	return (result);
}

int is_prime (int num)
{
	int x = 2;

	if (num <= 1)
		return (0);
	while (x * x <= num)
	{
		if (num % x == 0)
			return (0);
		x++;
	}
	return (1);
}

void put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int main (int argc, char *argv[])
{
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        int sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
    }
    write (1, "\n", 1);
    return (0);
}