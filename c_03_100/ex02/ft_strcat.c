/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:16:34 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/22 09:22:23 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	while (i >= 0)
	{
		dest[j + k] = src[k];
		k++;
		i--;
	}
	dest[j + k] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src1[5] = {"Hola"};
	char dest1[13] = {"mundo"};

	printf("%s\n", ft_strcat(dest1, src1));

	char src2[5] = {"Hola"};
	char dest2[13] = {"mundo"};
	printf("%s\n", strcat(dest2, src2));
//	char dest = {"Hola"};
//	printf("%s\n", ft_strcat(dest, src));
}
*/
