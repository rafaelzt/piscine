/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:23:13 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/24 20:53:17 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = ft_strlen(dest);
	j = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size < 1)
		return (src_length + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_length)
		return (src_length + size);
	else
		return (src_length + dest_length);
}

/*
int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 35;
    char buffer[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");
	printf("%s\n", first);
	printf("%s\n", last);
	printf("%s\n", buffer);

    return(0);
}*/
