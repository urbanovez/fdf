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

#ifndef FDF_H
# define FDF_H

# include "fcntl.h"
# include "sys/types.h"
# include "sys/uio.h"
# include "unistd.h"
# include <stdlib.h>
# include "../libft/libft.h"
# include  "../minilibx_macos/mlx.h"
# include "../get_next_line/get_next_line.h"

typedef struct
{
    int wildth;
    int height;
    int **z;

    void *mlx_ptr;
    void *win_ptr;
}           fdf;

void    read_file(char  *file_name, fdf *data);

#endif
