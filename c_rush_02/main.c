/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:22:30 by albenite          #+#    #+#             */
/*   Updated: 2022/07/24 19:45:58 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

typedef struct s_nodo
{
	int		nofb;
	char	*number;
	char	*desc;
}t_nodo;

int				ft_atoi(char *str);
char			*ft_strstr(char *str, char *to_find);
struct s_nodo	*ft_create_dictionary(char *arr);
struct node		ft_create_nodes(char *arr);

int	main(int argc, char *argv[])
{
	int				fd;
	char			buffer[BUFFER_SIZE];
	int				number;
	struct s_nodo	*nodes_list;
	char			*path;

	number = 0;
	path = "./dictionaries/numbers.dict";
	if (argc == 2)
		number = ft_atoi(argv[1]);
	if (argc == 3)
	{
		path = argv[1];
		number = ft_atoi(argv[2]);
	}
	if (argc > 3 || number < 0)
	{
		write(1, "error\n", 6);
		return (-1);
	}
	fd = open(path, O_RDONLY);
	while ((read(fd, buffer, BUFFER_SIZE)) > 0)
		write(1, buffer, BUFFER_SIZE);
	nodes_list = ft_create_dictionary(buffer);
	return (0);
}

int	count_lines(char *file)
{
	int		i;
	int		total;
	int		bytes_read;

	i = 0;
	total = 0;
	while (file[i])
	{
		if (file[i] == '\n')
			total++;
		i++;
	}
	printf("%d\n", total);
	return (total);
}

struct s_nodo	ft_create_node(char *line)
{
	char			number[50];
	char			description[45];
	int				i;
	struct s_nodo	node;

	i = 0;
	while (*line != ':' && *line != ' ' && (*line >= '0' && *line <= '9'))
	{
		number[i] = *line;
		line++;
		i++;
	}
	while (*line == ' ' || *line == ':')
		line++;
	i = 0;
	while (*line != '\n' && *line != '\0' && *line > 0)
	{
		description[i] = *line;
		i++;
		line++;
	}
	node.number = number;
	node.nofb = i;
	node.desc = description;
	return (node);
}

struct s_nodo	*ft_create_dictionary(char *buffer)
{
	int				number_of_lines;
	struct s_nodo	*nodes;
	int				i;
	int				j;
	char			*line;

	i = 0;
	j = 0;
	number_of_lines = 0;
	nodes = (t_nodo *)malloc(number_of_lines * sizeof(t_nodo));
	number_of_lines = count_lines(buffer);
	line = (char *)malloc(512);
	while (buffer[j] != '\0')
	{
		if (buffer[j] == '\n')
		{
			nodes[i] = ft_create_node(line);
			i++;
			free(line);
		}
		else
			line[j] = buffer[j];
		j++;
	}
	return (nodes);
}
