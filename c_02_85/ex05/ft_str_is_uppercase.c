/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:21:58 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 14:17:22 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 65 && str[counter] <= 90))
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
	char upper[] = "ABCDEF";
	char notUpper[] = "ABcDE";

	printf("%i\n", ft_str_is_uppercase(upper));
	printf("%i\n", ft_str_is_uppercase(notUpper));

	return (0);
}
*/
