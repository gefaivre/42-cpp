NAME= ex05

SRC=	main.cpp \
		Harl.cpp
CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g

OBJ=$(SRC:.c=.o)

%.o: %.c
	@$(CXX) $(CXXFLAGS)  -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJ) Harl.hpp
	${CXX} $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo [$(NAME)]: Created !


clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re