NAME= identify

SRC=	main.cpp \
		Function.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp

INC=	Base.hpp \
		A.hpp \
		B.hpp \
		C.hpp

CXX=c++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -g

OBJ=$(SRC:.c=.o)
	
all: $(NAME)

$(NAME): $(OBJ) $(INC)
	${CXX} $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo [$(NAME)]: Created !

clean:
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re