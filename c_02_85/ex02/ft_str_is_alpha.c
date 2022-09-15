/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:12:22 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:10:37 by rzamolo-         ###   ########.fr       */
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
}

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 65 && str[counter] <= 90)
				|| (str[counter] >= 97 && str[counter] <= 122)))
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
	char str_alpha[] = "HelloC";
	char str_non_alpha[] = "H3llo C!";

	printf("ALPHA: %i\n", ft_str_is_alpha(str_alpha));
	printf("NON ALPHA: %i\n", ft_str_is_alpha(str_non_alpha));
}
*/
