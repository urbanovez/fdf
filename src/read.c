/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 23:53:49 by ggorilla          #+#    #+#             */
/*   Updated: 2019/11/25 17:55:34 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int     get_height(char *name)
{
    int fd;
    int i;
    char *line;

    fd = open(name, O_RDONLY, 0);
    i = 0;//высота
    while(get_next_line(fd, &line))
    {
        i++;
        free(line);
    }
    close(fd);
    return (i);
}
int ft_wdcounter(char *line, char k)
{
    int i;

    i = 0;
    while (*line++)
    {
        if (*line == k)
            i++;
    }
    return (i);
}

int     get_wildth(char *name)
{
    int i;//высота
    int fd;
    char *line;

    fd = open(name, O_RDONLY, 0);
    get_next_line(fd, &line);
    i = ft_wdcounter(line, ' ');
    free(line);
    close(fd);
    return (i);
}

void    fill_matrix(int *z_line, char *line)
{
    char **nums;
    int i;

    nums = ft_strsplit(line, ' ');
    i = 0;
    while (nums[i])
    {
        z_line[i] = ft_atoi(nums[i]);
        free(nums[i]);
        i++;
    }
    free(nums);
}

void    read_file(char  *file_name, fdf *data)
{
    int i;
    int fd;
    char *line;

    data->height = get_height(file_name);
    data->wildth = get_wildth(file_name);
    data->z = (int **)malloc(sizeof(int*) * (data->height + 1));
    i = 0;
    while (i <= data->height)
        data->z[i++] = (int*)malloc(sizeof(int) * (data->wildth + 1));
    fd = open(file_name, O_RDONLY, 0);
    i = 0;
    while (get_next_line(fd, &line))
    {
        fill_matrix(data->z[i], line);
        free(line);
        i++;
    }
    close(fd);
    data->z[i] = NULL;
}// остановился на 11 17
