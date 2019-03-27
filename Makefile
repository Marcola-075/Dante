##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

all:
	make -sC ./generator_folder
	make -sC ./solver_folder

clean:
	make -sC ./generator_folder clean
	make -sC ./solver_folder clean

fclean: clean
	make -sC ./generator_folder fclean
	make -sC ./solver_folder fclean

re: 	fclean all
