/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:00:24 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/10 19:35:42 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first_line(char characters[3], int qty_col)
{
	int	pos;

	pos = 1;
	while (pos <= qty_col)
	{
		if (pos == 1)
			ft_putchar(characters[0]);
		else if (pos == qty_col)
			ft_putchar(characters[2]);
		else
			ft_putchar(characters[1]);
		pos++;
	}
	ft_putchar('\n');
}

void	print_between_line(char characters[3], int qty_col)
{
	int	pos;

	pos = 1;
	while (pos <= qty_col)
	{
		if (pos == 1 || pos == qty_col)
			ft_putchar(characters[1]);
		else
			ft_putchar(' ');
		pos++;
	}
	ft_putchar('\n');
}

void	print_last_line(char characters[3], int qty_col)
{
	int	pos;

	pos = 1;
	while (pos <= qty_col)
	{
		if (pos == 1)
			ft_putchar(characters[0]);
		else if (pos == qty_col)
			ft_putchar(characters[2]);
		else
			ft_putchar(characters[1]);
		pos++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	char	characters[3];
	int		counter;

	characters[0] = 'A';
	characters[1] = 'B';
	characters[2] = 'C';
	counter = 1;
	if (x > 0 && y > 0)
	{
		while (counter <= y)
		{
			if (counter == 1)
				print_first_line(characters, x);
			else if (counter == y)
				print_last_line(characters, x);
			else
				print_between_line(characters, x);
		counter++;
		}
	}
	return (0);
}
