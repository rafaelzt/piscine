/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:34:08 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/25 12:52:50 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

/*
int	main(void)
{
	printf("Hello: %i:\n", ft_strlen("Hello"));
	printf("Hello world: %i:\n", ft_strlen("Hello world"));
	printf("0123456789: %i:\n", ft_strlen("0123456789"));



	return (0);
}
*/
