/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:42:04 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 20:19:20 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer (char *str)
{
    int x  = 0;

    while (str[x])
    {
        if (str[x] >= 'A' && str[x] <= 'Z')
            str[x] += 32;
        if ((str[x] >= 'a' && str[x] <= 'z') && (str[x-1] == ' ' || str[x-1] == '\t' || str[x-1] == '\0'))
            str[x] -= 32;
        write (1, &str[x], 1);
        x++;
    }
}

int main (int argc, char *argv[])
{
    int x = 1;

    if (argc == 1)
        write (1, "\n", 1);
    else
    {
        while (x < argc)
        {
            str_capitalizer (argv[x]);
            write (1, "\n", 1);
            x++;
        }
    }
    return (0);
}