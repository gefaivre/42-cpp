NAME= ex01

SRC=	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongDog.cpp \
		Brain.cpp
		

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g

OBJ=$(SRC:.c=.o)
	
all: $(NAME)

$(NAME): $(OBJ)  Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongDog.hpp Brain.hpp
	${CXX} $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo [$(NAME)]: Created !


clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re