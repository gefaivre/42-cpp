NAME= phonebook

SRC=	main.cpp \
		Contact.cpp \
		PhoneBook.cpp \
		ft_getline.cpp

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

OBJ=$(SRC:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS)  -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJ) PhoneBook.hpp Contact.hpp 
	${CC} $(CFLAGS) -o $(NAME) $(OBJ)
	@echo [$(NAME)]: Created !


clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re