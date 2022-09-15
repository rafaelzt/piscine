/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:00:09 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/17 17:55:47 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_get_solutions(int c1u, int c1d);
int		ft_validate_arguments(int n_of_arguments, char *values);

int	main(int argc, char **argv)
{
	ft_validate_arguments(argc, argv[1]);
	return (0);
}
