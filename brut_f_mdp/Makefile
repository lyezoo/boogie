NAME = brut

SRC_PATH = srcs/

SRC_NAME = brut_mdp.c aff_message.c

SRC2_PATH = ../libft/

SRC2_NAME = ft_memalloc.c ft_putendl.c ft_putstr.c ft_recursive_power.c \
			ft_strequ.c ft_strlen.c ft_memset.c

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

SRC2 = $(addprefix $(SRC2_PATH), $(SRC2_NAME))

OBJ = $(SRC_NAME:.c=.o)

OBJ2 = $(SRC2_NAME:.c=.o)

CFLAGS = -Wall -Wextra -Werror

INCLUDE = -I ./include/

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) $(SRC2) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(SRC2)

clean:
	$(RM) $(OBJ) $(OBJ2)

fclean: clean
	$(RM) $(NAME)

re: fclean all
