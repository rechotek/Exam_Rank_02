/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:00:19 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 18:54:18 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int x = 0;
    int len = abs(end - start) + 1;
    int *result;
    int step = 1;

    result = (int *)malloc(sizeof(int) * len);
    if (result == NULL)
        return (NULL);
    if (start < end)
        step = -1;
    while (x < len)
    {
        result[x] = end;
        end = end + step;
        x++;
    }
    return (result);
}


int main(void)
{
    int start = 44;
    int end = -15;

    int *result = ft_rrange(start, end);
    if (result != NULL)
    {
        for (int x = 0; x < abs(end - start) + 1; x++)
            printf("%d ", result[x]);
        printf("\n");

        free(result);
    }
    else
        printf("Nie udało się przydzielić pamięci.\n");
    return 0;
}