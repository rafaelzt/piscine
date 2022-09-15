/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:32:47 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/25 12:48:28 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_space(char str)
{
	if (str == 32 || (str >= 9 && str <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	integer;
	int	sign;

	sign = 1;
	integer = 0;
	while (is_space(*str) == 1 || *str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= (-1);
			str ++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		integer = (integer * 10) + (*str - '0');
		str ++;
	}
	integer = integer * sign;
	return (integer);
}
