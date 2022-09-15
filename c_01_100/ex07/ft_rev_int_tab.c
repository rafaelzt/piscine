/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:21:30 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/14 17:20:06 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	current;
	int	counter;
	int	inter;

	inter = size / 2;
	counter = 0;
	size--;
	while (inter > 0)
	{
		current = tab[counter];
		tab[counter] = tab[size];
		tab[size] = current;
		counter++;
		inter--;
	size--;
	}
}
