/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:01:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/28 19:20:38 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	b;

	a = 0;
	b = nb;
	if (nb <= 0)
		return (0);
	while (a <= 46341 && (a * a) < nb)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}

/*
int main()
{
	printf("%d",ft_sqrt(207025));
	return 0;
}
*/
