# ****************************************************************************
# # #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 12:58:28 by zamaseko          #+#    #+#              #
#    Updated: 2019/05/31 08:56:28 by zamaseko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
FLAGS = -Wall -Werror -Wextra
SRCS = src/.c 
OBJS = *.o 
/*HEADER_FOLDERS = */

make_lib:
	gcc - -c
	ar -rv $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	/bin/rm -f *.o
fclean: 
	/bin/rm -f $(NAME)

re: fclean all 


