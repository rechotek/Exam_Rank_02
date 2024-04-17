/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrechuli <mrechuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:30:53 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 17:18:20 by mrechuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size (t_list *begin_list)
{
    if (begin_list == 0)
        return (0);
    else 
        return (1 + ft_list_size(begin_list->next));
}

int main(void)
{
    // Tworzenie kilku elementów listy
    t_list *first = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    // Inicjalizacja danych
    first->next = second;
    second->next = third;
    third->next = NULL;

    // Obliczanie rozmiaru listy
    int size = ft_list_size(first);

    // Wyświetlanie wyniku
    printf("Rozmiar listy: %d\n", size);

    // Zwolnienie pamięci
    free(first);
    free(second);
    free(third);

    return 0;
}