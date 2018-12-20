clang -Wall -Wextra -Werror -I ~/42/libft/includes/ -c ~/42/get_next_line/get_next_line.c main.o
clang -o test_gnl main.o get_next_line.o libft.a -I ~/42/libft/includes
rm *.o
