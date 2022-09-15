/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:33:59 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:10:51 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\0');
}

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 48 && str[counter] <= 57))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/*
int	main(void)
{

	printf("%i\n", ft_str_is_numeric("2"));
	printf("%i\n", ft_str_is_numeric("0"));
	printf("%i\n", ft_str_is_numeric("9"));
	printf("%i\n", ft_str_is_numeric(""));
	printf("%i\n", ft_str_is_numeric("A"));
	return (0);
}
*/
