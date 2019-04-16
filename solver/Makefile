##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	main.c		\
		check_file.c	\
		my_solver.c	\
		create_list.c	\
		create_path.c	\
		manage_lklist.c	\
		clear_map.c	\
		disp_maze.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	=	-I ./include -g

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
