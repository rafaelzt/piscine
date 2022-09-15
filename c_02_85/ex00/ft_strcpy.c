/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:29:45 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/20 12:22:15 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

/*
int main() {
  char str2[5];
  char str1[5] = "Hola";

  ft_strcpy(str2, str1);

  printf("%s\n", str2); 
  printf("%s\n", str1); 

  return 0;
}
*/
