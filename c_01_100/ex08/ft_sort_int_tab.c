/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:24:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/18 13:29:16 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int aux;

    i = 0;

    while (i < size - 1)
    {
        j = 0;
        while ( j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                aux = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = aux;
            }
            j++;
        }
        i++;
    }
}


/*
int main(void)
{
    int arr[4] = {7, 3, 8, 2};
    int counter = 0;
    while (counter < 4)
    {
        printf("%i, ", arr[counter]);
        counter++;
    }
    printf("\n");
    ft_sort_int_tab(arr, 4);
    counter = 0;
    while (counter < 4)
    {
        printf("%i, ", arr[counter]);
        counter++;
    }
    return (0);
}
*/
