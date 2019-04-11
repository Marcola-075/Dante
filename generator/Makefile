##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	main.c		\
		my_gen.c	\
		checks.c	\
		maze_gen.c	\
		create_list.c	\
		create_path.c	\
		manage_lklist.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

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
