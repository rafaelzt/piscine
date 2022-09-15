/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:03:19 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:11:06 by rzamolo-         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 97 && str[counter] <= 122))
		{		
			return (0);
		}
		counter++;
	}
	return (1);
}

/*
int main(void)
{
	char lowercase[] = "abcdef";
	char notLowercase[] = "Abcdef";

	printf("%i\n", ft_str_is_lowercase(lowercase));
	printf("%i\n", ft_str_is_lowercase(notLowercase));
	return (0);
}
*/
