/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:09:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:32:24 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		index;

	index = 0;
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
	index++;
	while (str[index] != '\0')
	{
		if (str[index - 1] < '0' || str[index - 1] > 'z'
			|| (str[index - 1] > '9' && str[index - 1] < 'A')
			|| (str[index - 1] > 'Z' && str[index - 1] < 'a'))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		index++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[80] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
*/
