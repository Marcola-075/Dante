##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	my_strlen.c		\
		my_biggerstrlen.c	\
		my_strcmp.c		\
		my_putchar.c		\
		my_putstr.c		\
		my_getnbr.c		\
		my_put_nbr.c		\
		my_puttab.c		\
		my_realloc.c		\
		my_tablen.c		\
		put_in_tab.c		\
		my_cat.c		\
		my_str_isalpha.c	\
		my_str_isnum.c		\
		my_random.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		fclean all
