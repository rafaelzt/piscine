/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:07:22 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/12 19:11:02 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_i;
char	g_j;
char	g_k;
char	g_sep[2];

void	ft_print_comb(void)
{
	g_i = '0';
	g_sep[0] = ',';
	g_sep[1] = ' ';
	while (g_i <= '9')
	{
		g_j = g_i + 1;
		while (g_j <= '9')
		{
			g_k = g_j + 1;
			while (g_k <= '9')
			{
				write(1, &g_i, 1);
				write(1, &g_j, 1);
				write(1, &g_k, 1);
				if (!(g_i == '7' && g_j == '8' && g_k == '9'))
				{
					write(1, &g_sep, 2);
				}
			g_k++;
			}
		g_j++;
		}
	g_i++;
	}
}
