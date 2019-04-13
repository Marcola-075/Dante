##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	main.c		\
		solve_it.c	\
		find_the_way.c	\
		check_file.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	=	-I ./include

LIB	=	-L ../lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ../lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)
	make -sC ../lib/my clean

fclean: clean
	rm -f $(NAME)
	make -sC ../lib/my fclean

re: fclean all
