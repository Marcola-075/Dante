##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

all:
	make -sC ./generator
	make -sC ./solver

clean:
	make -sC ./generator clean
	make -sC ./solver clean

fclean: clean
	make -sC ./generator fclean
	make -sC ./solver fclean

re: 	fclean all
