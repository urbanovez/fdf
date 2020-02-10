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
#include <stdio.h>
int main (int argc, char **argv)
{
    fdf *data;
    int i;
    int j;
    data = (fdf*)malloc(sizeof(fdf));
    read_file(argv[1], data);
    i = 0;
    while (i < data->height)
    {
        j = 0;
        while (j < data->wildth)
        {
            printf("%3d", data->z[i][j]);//заменить
            j++;
        }
        printf("\n");
        i++;
    }
}