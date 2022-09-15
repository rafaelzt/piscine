/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:56:43 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/25 20:21:27 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	return (0);
}

int	main(void)
{
	char str1[] = {"muado!"};
	char str2[] = {"mñuado!"};
	unsigned int i = 5;

	printf("strncmp - resultado: %d\n", strncmp(str1, str2, i));
	printf("ft_strncmp - resultado: %d\n", ft_strncmp(str1, str2, i));

	return (0);
}

