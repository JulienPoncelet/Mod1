NAME = mod1

DIRSRC = ./srcs/
DIROBJ = ./.obj/

SRC  = 	mod1.cpp\
		checkfile.cpp

OBJ = $(SRC:.cpp=.o)

DIROBJS = $(addprefix $(DIROBJ), $(OBJ))

HEADERS = ./headers/

CFLAGS= -Wall -Werror -Wextra
CC = g++

all: $(NAME)

$(NAME): $(DIROBJS)
	@$(CC) $(CFLAGS) -o $@ $^
	@printf 'Compiling %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

$(DIROBJ)%.o: $(DIRSRC)%.cpp
	@mkdir -p $(DIROBJ)
	@$(CC) $(CFLAGS) -c $^ -I $(HEADERS) -o $@
	@printf 'Compiling %s: [\033[32mDONE\033[0m]\n' '$^'

clean:
	@rm -rf $(DIROBJ)
	@printf 'Clean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

fclean: clean
	@$(RM) $(RFLAGS) $(NAME)
	@printf 'Fclean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

re : fclean all

exec: re
	@./$(NAME) misc/demo1.mod1

.PHONY: all clean fclean re