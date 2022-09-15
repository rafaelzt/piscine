/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:14:42 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/24 20:54:03 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_length;

	i = 0;
	dest_length = 0;
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	while (src[i] && i < nb)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

/*
int main()
{

   // Take any two strings
   char src[50] = "forgeeks";
   char dest1[50] = "geeks";
   char dest2[50] = "geeks";

   printf("Before strcat() function execution, ");
   printf("destination string : %s\n", dest1);

   // Appends the entire string of src to dest1
   ft_strncat(dest1, src, 3);

   // Prints the string
   printf("After strcat() function execution, ");
   printf("destination string : %s\n", dest1);

   printf("Before strncat() function execution, ");
   printf("destination string : %s\n", dest2);

   // Appends 3 characters from src to dest2
   strncat(dest2, src, 3);

   // Prints the string
   printf("After strncat() function execution, ");
   printf("destination string : %s\n", dest2);

   return 0;
}
*/
