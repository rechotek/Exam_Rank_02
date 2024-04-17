/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:54:44 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 20:00:39 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// obliczamy najwiekszy wspolny dzielnik dwoch liczb (czyli najwieksza liczba)
// przez ktora moga byc podzielone obie liczby bez reszty, np.
// 12/6=2
// 18/6=3

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int nbr1;
    int nbr2;

    if (argc == 3)
    {
        if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
        {
            while (nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1 -= nbr2;
                else
                    nbr2 -= nbr1;
            }
            printf ("%d", nbr1);
        }
    }
    printf ("\n");
    return (0);
}