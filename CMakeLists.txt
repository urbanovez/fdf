cmake_minimum_required(VERSION 3.15)
project(fdf C)

set(CMAKE_C_STANDARD 99)

add_executable(fdf src/main.c src/read.c libft/ft_atoi.c libft/ft_strsplit.c get_next_line/get_next_line.c libft/ft_memdel.c libft/ft_strchr.c libft/ft_strdel.c libft/ft_strdup.c libft/ft_strjoin_free.c libft/ft_strlen.c libft/ft_strnew.c libft/ft_strsub.c get_next_line/draw.c)