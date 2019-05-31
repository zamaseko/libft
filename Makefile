# ****************************************************************************
# # #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 12:58:28 by zamaseko          #+#    #+#              #
#    Updated: 2019/05/31 16:09:09 by zamaseko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
FLAGS = -Wall -Werror -Wextra -c
SRCS = ft_putchar.c ft_putstr.c ft_tolower.c ft_toupper.c ft_strlen.c \
	  ft_isalpha.c ft_strcpy.c ft_strncat.c ft_putchar_fd.c ft_putstr_fd.c \
	 ft_putendl.c 
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
