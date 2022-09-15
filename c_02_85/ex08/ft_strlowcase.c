/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:24:11 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:12:10 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 97 && str[counter] <= 122))
			if (str[counter] >= 65 && str[counter] <= 90)
				str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);
}

/*
int	main(void)
{
	char str1[] = "ABCDE";
	char str2[] = "AbcdE";
	char str3[] = "A1c1E";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
}
*/
