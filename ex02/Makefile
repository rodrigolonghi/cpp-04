NAME	=	animal

CC	=	c++
CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98

SRC	=	main.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp

HEADER	=	Animal.hpp \
			Brain.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp

OBJ_DIR	=	objs
OBJ	=	$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all:	$(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)
	rm -f leaks.txt

fclean:	clean
	rm -f $(NAME)

re: fclean all

test:	re
	valgrind --leak-check=full --log-file="leaks.txt" ./$(NAME)
