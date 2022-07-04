NAME= ex00

SRC=	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

OBJ=$(SRC:.c=.o)

%.o: %.c
	@$(CXX) $(CXXFLAGS)  -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJ) Zombie.hpp
	${CXX} $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo [$(NAME)]: Created !


clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re