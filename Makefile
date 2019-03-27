##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bin_name

CFLAGS	=	-I ./include

LIB	=	-L ./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)
	make -sC ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -sC ./lib/my fclean

re: fclean all
