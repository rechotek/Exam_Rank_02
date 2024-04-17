/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:02:09 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 20:23:59 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
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

void ft_putnbr (int nbr)
{
    if (nbr > 9)
        ft_putnbr (nbr / 10);
    write (1, &"0123456789"[nbr % 10], 1);
}

void ft_putstr (char *str)
{
    int x = 0;

    while (str[x])
    {
        write (1, &str[x], 1);
        x++;
    }
}

int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    int y = 1;
    int num = ft_atoi (argv[1]);
    while (y < 10)
    {
        ft_putnbr(y);
        ft_putstr(" x ");
        ft_putnbr(num);
        ft_putstr(" = ");
        ft_putnbr(y * num);
        write (1, "\n", 1);
        y++;
    }
}