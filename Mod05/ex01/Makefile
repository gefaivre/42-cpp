NAME= ex01

SRC=	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g

OBJ=$(SRC:.c=.o)
	
all: $(NAME)

$(NAME): $(OBJ)  Bureaucrat.hpp Form.hpp
	${CXX} $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo [$(NAME)]: Created !

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re