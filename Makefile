##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

SRC 	=	$(shell echo src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f src/*.o
	rm -f src/*~

fclean: clean
	rm -f my_sokoban

re: fclean all
