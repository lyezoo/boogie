EXE = libft

C_FILES = *.c

O_FILES = *.o

HEADER = lh_proto

all : $(EXE)

$(EXE) :
	@gcc -c $(C_FILES) -I $(HEADER)
	@ar rc $(EXE).a $(O_FILES)

clean :
	@rm $(O_FILES)

fclean : clean
	@rm $(EXE).a

re : fclean all

so :
	@cc -shared -o $(EXE).so -fPIC $(C_FILES)
