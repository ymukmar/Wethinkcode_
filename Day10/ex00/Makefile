# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymukmar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/13 14:15:35 by ymukmar           #+#    #+#              #
#    Updated: 2016/04/13 15:36:08 by ymukmar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c ./srcs/ft_swap.c

OBJECT = ./ft_putchar.o ./ft_putstr.o ./ft_swap.o ./ft_strlen.o ./ft_strcmp.o

FLAGS = -Wall -Wextra -Werror 

OPTIONS = -c -I ./includes/

all : $(NAME)
$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
