/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:06:09 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/28 19:17:34 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
/*
int	main()
{
	int a;

	a = ft_recursive_factorial(5);
	printf("%d",a);
	return 0;
}
*/
