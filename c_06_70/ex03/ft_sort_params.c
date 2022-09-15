/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:27:58 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/28 14:01:04 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int	ft_compare_str(char *str1, char *str2)
{
	int	n;
	n = 0;
	while (str1[n] && str1[n] == str2[n])
		n++;
	return (str1[n] - str2[n]);
}
void	ft_sort_params(char **str, int size)
{
	int		i;
	int		j;
	char	*aux;
	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_compare_str(str[j], str[i]) > 0)
			{
				aux = str[i];
				str[i] = str[j];
				str[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	i = 1;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[argc - i]);
		i++;
	}
	return (0);
}
