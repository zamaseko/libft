# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 12:28:43 by zamaseko          #+#    #+#              #
#    Updated: 2019/06/06 10:55:40 by zamaseko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
FLAGS = -Wall -Werror -Wextra -c
SRCS = ft_putchar.c ft_putstr.c ft_tolower.c ft_toupper.c ft_strlen.c \
	  ft_isalpha.c ft_strcpy.c ft_strdup.c ft_strncat.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl.c ft_putnbr.c ft_atoi.c ft_isdigit.c \
	  ft_isascii.c ft_isalnum.c ft_strcmp.c ft_isprint.c ft_strncmp.c \
	  ft_strcat.c ft_putendl_fd.c ft_putnbr_fd.c ft_strncpy.c ft_strstr.c 
OBJS = *.o 

all : $(NAME)
	
$(NAME):
	gcc $(FLAGS) $(SRCS) 
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -rf *.o
fclean: clean 
	rm -rf  $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
