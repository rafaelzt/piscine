/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:45:38 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/17 17:56:51 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	*arr;

	arr = str;
	i = 0;
	while (arr[i] != '\0')
	{
		ft_putchar(arr[i]);
		i++;
	}
}
