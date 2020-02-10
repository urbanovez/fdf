/* ****************** ******************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttawna <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:48:36 by ttawna            #+#    #+#             */
/*   Updated: 2019/10/03 18:55:32 by ttawna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int 	main(int argc, char ** argv)
{
    argv += 0;
	if (argc == 1)
	{
		printf("sssss");
		int fd = open("dick", O_RDONLY);
		char *l;
		while (get_next_line(fd, &l) > 0)
		{
			printf("%s\n", l);
			ft_strdel(&l);
		}
		if (l != NULL)
			ft_strdel(&l);
        close(fd);
	}
	return (0);
}
