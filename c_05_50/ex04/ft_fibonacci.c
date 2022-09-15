/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:40:45 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/28 19:20:11 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;

	a = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (a);
}

/*
int main()
{
	printf("%d", ft_fibonacci(10));
	return 0;
}
*/
