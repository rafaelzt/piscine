/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:43:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 15:21:54 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int			i;
	const char	hex[16] = "0123456789abcdef";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			write(1, &str[i], 1);
		}
		else if (str[i] <= 31 || str[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char arr[30] = "Co\tucou\17tu v\nas bien ?\xff";

	ft_putstr_non_printable(arr);

	return (0);
}
*/
