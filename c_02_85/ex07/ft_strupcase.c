/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:01:57 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:11:56 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}

/*
int	main(void)
{
	char lowercase1[] = "abcDEF";
	char lowercase2[] = "012aBcD";
	char lowercase3[] = "ABCDEfgh";

	printf("%s\n", ft_strupcase(lowercase1));
	printf("%s\n", ft_strupcase(lowercase2));
	printf("%s\n", ft_strupcase(lowercase3));

	return (0);
}
*/
