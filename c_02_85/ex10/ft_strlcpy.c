/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:37:46 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:12:45 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!src || !dest)
		return (0);
	if (size != 0)
	{
		while (i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char src[] = "12345678";
	char dest[] = "abcde";
	unsigned int size = 7;

	printf("%i\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);

	return (0);
}
*/
