/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:45:55 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/22 09:23:56 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
//#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char *s1;
	char *s2;

	s2 = "ordemP\0";
	s1 = "ordemZ\0";

	printf("%d\n", strcmp(s2, s1));
	printf("%d", ft_strcmp(s2, s1));
	// system("leaks ./a.out");
	return (0);
}
*/
