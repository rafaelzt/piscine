/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:03:26 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/22 09:21:03 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	is_different;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			is_different = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					is_different = 1;
				i++;
			}
			if (is_different == 0)
				return (str);
		}	
		str++;
	}	
	return (0);
}
/*
int	main(void)
{
	char str[] = "Hola mundo!";
	char to_find[] = "mundo";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));

	return (0);
}
*/
