# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arlaine <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 15:43:45 by arlaine           #+#    #+#              #
#    Updated: 2018/12/21 00:24:49 by lyhamrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = check_block.c cut_blocks.c print.c create_map.c resolve.c free_var.c \
	  rest.c ft_strsplit.c ft_strlen.c ft_memalloc.c ft_memset.c ft_putstr.c \
	  ft_strdup.c ft_strchr.c ft_strsub.c ft_putendl.c ft_strcpy.c ft_strnew.c \
	  ft_memchr.c ft_strdel.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@gcc -c $(SRC)
	@gcc -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
