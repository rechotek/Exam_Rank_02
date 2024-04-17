/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:41:35 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 17:46:23 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int x = 0;
    int len = abs(end - start) + 1;
    int *result;

    result = (int *)malloc(sizeof(int) * len);
    if (result == NULL)
        return (NULL);
    while (x < len)
    {
        if (start < end)
        {
            result[x] = start;
            start++;
            x++;
        }
        else
        {
            result[x] = start;
            start--;
            x++;
        }
    }
    return (result);
}

int main (void)
{
    int x = 0;
    int start = 1;
    int end = 9;
    int *result = ft_range (start, end);
    while (result[x])
    {
        printf("%d ", result[x]);
        x++;
    }
    return (0);
}

// int main(void)
// {
//     int start = 5;
//     int end = 10;

//     int *result = ft_range(start, end);
//     if (result != NULL)
//     {
//         for (int i = 0; i < abs(end - start) + 1; i++)
//         {
//             printf("%d ", result[i]);
//         }
//         printf("\n");

//         free(result); // Zwolnij pamięć przydzieloną przez ft_range
//     }
//     else
//     {
//         printf("Nie udało się przydzielić pamięci.\n");
//     }

//     return 0;
// }