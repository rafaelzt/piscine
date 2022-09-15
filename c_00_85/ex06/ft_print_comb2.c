/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:36:52 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/12 19:15:17 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	presentar(char first, char second, char third, char fourth)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write(1, &third, 1);
	write(1, &fourth, 1);
	if (!(first == '9' && second == '8' && third == '9' && fourth == '9'))
	{
		write(1, ", ", 2);
	}
}

void	convert(int i, int j)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = i / 10 + '0';
	b = i % 10 + '0';
	c = j / 10 + '0';
	d = j % 10 + '0';
	presentar(a, b, c, d);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 99;
	while (i <= k)
	{
		j = i + 1;
		while (j <= k)
		{
			convert(i, j);
			j++;
		}
		i++;
	}
}
