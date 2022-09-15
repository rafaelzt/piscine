/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_arguments.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:21:21 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/17 17:56:29 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_validate_arguments(int n_of_arguments, char *values)
{
	int	i;
	int	j;
	int	int_arr[16];

	i = 0;
	j = 0;
	if (n_of_arguments == 2)
	{
		while (values[i] != '\0')
		{
			if (values[i] >= '1' && values[i] <= '4')
			{
				if (values[i + 1] == ' ' || values[i + 1] == '\0')
				{
					int_arr[j] = values[i] - '0';
					j++;
				}
			}
		i++;
		}
	}
	if (j != 16)
		ft_putstr("Error\n");
}
