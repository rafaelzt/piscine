/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:38:21 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/07/26 19:59:23 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write/read
#include <fcntl.h>  // read file
#include <stdio.h>  // print
#include <stdlib.h> // malloc
#define BUFFER_SIZE 1024

int ft_atoi(char *str);

int ft_get_filesize(char *path)
{
    char buf[1];
    int fd;
    int file_size;

    file_size = 0;
    fd = open(path, O_RDONLY);
    while (read(fd, buf, sizeof(buf)) > 0)
        file_size++;
    close(fd);
    return (file_size);
}

void ft_read_filecontent(char *path, char *file_content, int file_size)
{
    char buf[1];
    int fd;

    fd = open(path, O_RDONLY);
    while (read(fd, buf, 1) > 0)
    {
        *file_content = *buf;
        file_content++;
    }
    *file_content = '\0';
    file_content -= (file_size);
    printf("%s\n", file_content);
    close(fd);
}

char *ft_read_firstline(char *file_content)
{
    int i;
    char *first_line;

    i = 0;
    while (file_content[i] != '\n')
        i++;
    i++;
    first_line = (char *)malloc(sizeof(char) * (i));
    i = 0;
    while (file_content[i] != '\n')
    {
        first_line[i] = file_content[i];
        i++;
    }
    first_line[i] = '\0';
    return (first_line);
}

int ft_first_line_length(char *first_line)
{
    int i;

    i = 0;
    while (first_line[i] != '\n')
    {
        i++;
    }
    i++;
    return (i);
}

int ft_count_lines(char *file_content)
{
    int position;
    int j;

    j = 0;
    position = 0;
    while (file_content[position] != '\0')
    {
        if (file_content[position] == '\n')
            j++;
        position++;
    }
    return (j);
}

int ft_count_columns(char *file_content)
{
    int first_line_length;
    int position;
    int qty_columns;

    qty_columns = 0;
    first_line_length = ft_first_line_length(file_content);
    while (position <= first_line_length)
    {
        position++;
    }
    while (file_content[position] != '\0')
    {
        if (file_content[position] == '\n')
        {
            qty_columns++;
        }
        position++;
    }
    return (qty_columns);
}

int main(void)
{
    char *path;
    char *file_content;
    char *first_line;
    int file_size;

    path = "./example_file";
    file_size = ft_get_filesize(path);
    file_content = (char *)malloc(sizeof(char) * (file_size + 1));
    ft_read_filecontent(path, file_content, file_size);
    // Lines
    first_line = ft_read_firstline(file_content);
    printf("First line: %s\n", first_line);
    printf("First line length (with NUL): %i\n", ft_first_line_length(file_content));
    if (ft_atoi(first_line) != (ft_count_lines(file_content) - 1))
    {
        write(1, "map error\n", 10);
        free(first_line);
        free(file_content);
        return (1);
    }
    // Columns
    printf("Number of columns: %i\n", ft_count_columns(file_content));
    // Free
    free(first_line);
    free(file_content);
    return (0);
}
