/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sample.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:15:21 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/17 17:59:48 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_get_solutions(int i, int j)
{
	int	line;
	int	position;
	int	solutions[24][6] = {
	{4, 1, 2, 3, 4, 1},
	{3, 2, 1, 3, 4, 1},
	{3, 2, 3, 1, 4, 1},
	{3, 2, 3, 4, 1, 2},
	{3, 1, 3, 4, 2, 2},
	{3, 1, 2, 4, 3, 2},
	{3, 1, 3, 2, 4, 1},
	{2, 3, 2, 1, 4, 1},
	{2, 3, 1, 2, 4, 1},
	{2, 3, 4, 2, 1, 3},
	{2, 2, 4, 3, 1, 3},
	{2, 1, 4, 3, 2, 3},
	{2, 3, 4, 1, 2, 3},
	{2, 3, 2, 4, 1, 2},
	{2, 3, 1, 4, 2, 2},
	{2, 2, 1, 4, 3, 2},
	{2, 2, 4, 1, 3, 2},
	{2, 1, 4, 2, 3, 2},
	{1, 4, 2, 1, 3, 2},
	{1, 4, 3, 1, 2, 3},
	{1, 4, 3, 2, 1, 4},
	{1, 4, 2, 3, 1, 3},
	{1, 4, 1, 3, 2, 3},
	{1, 4, 1, 2, 3, 2}
	};

	line = 0;
	position = 0;
	while (line <= 24)
	{
		if (solutions[line][0] == i && solutions[line][5] == j)
		{
			while (position < 6)
			{
				printf("%i ", solutions[line][position]);
				position++;
			}
			printf("\n");
			position = 0;
		}
	line++;
	}
}