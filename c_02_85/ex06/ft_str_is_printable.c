/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:50:56 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:11:41 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str[counter] >= 32 && str[counter] <= 126))
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
	char printable[] = " !#%&/'()~";
	char nonPrintable[] = "Ç !#%&/'()~";

	printf("%i\n", ft_str_is_printable(printable));
	printf("%i\n", ft_str_is_printable(nonPrintable));

}
*/
