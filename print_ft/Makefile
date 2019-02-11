# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/26 15:48:38 by lyhamrou          #+#    #+#              #
#    Updated: 2019/02/11 01:36:20 by lyhamrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

NAME2 = print_ft

SRC_PATH = srcs/

SRC_PATH2 = srcs/aff/

SRC_PATH3 = srcs/adjust/

SRC_NAME = ft_printf.c initialize_struct.c

SRC_NAME2 = aff_di.c aff_o.c aff_x.c aff_integer.c aff_x_maj.c aff_f.c \
			aff_c.c aff_p.c aff_s.c aff_u.c

SRC_NAME3 = adjust_di.c adjust_o.c adjust_x.c

MAIN_F = main.c # a supprimer plus tard

MAIN2_F = main2.c # a supprimer plus tard

OBJ = $(SRC_NAME:.c=.o)

OBJ2 = $(SRC_NAME2:.c=.o)

OBJ3 = $(SRC_NAME3:.c=.o)

LIB = libft/

LIB_A = libft.a

CPPFLAGS = -I ./include/

LDFLAGS = -L.

LDLIBS = -lftprintf

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))

SRC2 = $(addprefix $(SRC_PATH2),$(SRC_NAME2))

SRC3 = $(addprefix $(SRC_PATH3),$(SRC_NAME3))

MAIN = $(addprefix $(SRC_PATH),$(MAIN_F)) # a supprimer plus tard

MAIN2 = $(addprefix $(SRC_PATH),$(MAIN2_F)) # a supprimer plus tard

LIBFT = $(addprefix $(LIB),$(LIB_A))

all: $(NAME)

$(NAME):
	@make -C $(LIB)
	@$(CC) -c $(SRC) $(SRC2) $(SRC3)
	@ar rc $(NAME) $(OBJ) $(OBJ3) $(OBJ2)
	@ranlib $(NAME)

comp: re
	@$(CC) $(CFLAGS) -o $(NAME2) $(MAIN) $(SRC) $(SRC2) $(SRC3) $(LIBFT) $(CPPFLAGS)

comp2: re
	@$(CC) -o $(NAME2) $(MAIN2) $(SRC) $(SRC2) $(SRC3) $(LIBFT) $(CPPFLAGS) && ./$(NAME2)

clean:
	@$(RM) $(OBJ) $(OBJ2) $(OBJ3)
	@make -C $(LIB) clean

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)

ffclean: fclean
	@$(RM) $(NAME2)

re : fclean all

.PHONY : all clean fclean re comp

# ne pas oublier d enlever le main

# le makefile devra compiler un libftprintf.a
#
# ne pas oblier de faire en sorte que ca relink pas
