/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:02:52 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/28 19:18:09 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		i--;
		nb = nb * i;
	}
	return (nb);
}
/*
int main()
{
	int a;
	float b = 5;

	a= ft_iterative_factorial(b);
	printf("%d",a);
}
*/
