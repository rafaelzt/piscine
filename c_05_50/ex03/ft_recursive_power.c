/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:56:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/28 19:19:47 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 0)
		x = nb * ft_recursive_power(nb, power - 1);
	return (x);
}

/*
int main()
{
	printf("%d",ft_recursive_power(5,3));
	return 0;
}
*/
