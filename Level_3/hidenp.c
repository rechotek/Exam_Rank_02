/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:29:13 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 19:12:10 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char *argv[])
{
    int x = 0;
    int y = 0;
   
    if (argc == 3)
    {
        while (argv[1][x] && argv[2][y])
        {
            if (argv[1][x] == argv[2][y])
                x++;
            y++;
        }
        if (argv[1][x] == '\0')
            write (1, "1", 1);
        else
            write (1, "0", 1);
    }
    write (1, "\n", 1);
    return (0);
}

