# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xizhou <xizhou@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:36:43 by xizhou            #+#    #+#              #
#    Updated: 2021/11/08 11:38:09 by xizhou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c

OBJECT_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = includes

.PHONY: clean

all: $(NAME)

$(OBJECT_O): 
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SOURCES)

$(NAME): $(OBJECT_O)
	ar rc $(NAME) $(OBJECT_O)

clean:
	rm -f $(OBJECT_O)

fclean: clean
	rm -f $(NAME)
	
re: fclean all
