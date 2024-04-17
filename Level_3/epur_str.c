/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:58:48 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 17:02:05 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
    int x = 0;
    int p = 0;

    if (argc == 2)
    {
        while (argv[1][x] == ' ' || argv[1][x] == '\t')
            x++;
        while (argv[1][x])
        {
            if (argv[1][x] == ' ' || argv[1][x] == '\t')
                p = 1;
            if (!(argv[1][x] == ' ' || argv[1][x] == '\t'))
            {
                if (p == 1)
                    write (1, " ", 1);
                p = 0;
                write (1, &argv[1][x], 1);
            }
            x++;
        }
    }
    write (1, "\n", 1);
    return (0);
}