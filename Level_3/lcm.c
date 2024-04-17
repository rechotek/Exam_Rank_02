/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:35:35 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 19:25:53 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//liczymy najmniejsza wspolna wielokrotnosc

#include <unistd.h>
#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int x;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        x = a;
    else
        x = b;
    while (1)
    {
        if (x % a == 0 && x % b == 0)
            return (x);
        x++;
    }
}

int main (void)
{
    unsigned int a = 2;
    unsigned int b = 2;
    printf("%d\n", lcm(a, b));
    return (0);
}