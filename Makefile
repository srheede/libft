# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srheede <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 15:30:46 by srheede           #+#    #+#              #
#    Updated: 2018/05/22 23:15:13 by srheede          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

HEADER = ./includes/libft.h

OBJ = *.o

FLAG = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAG) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
