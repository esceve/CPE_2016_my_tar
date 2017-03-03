##
## Makefile for Makefile in /home/esceve/EPITECH/CPE/CPE_2016_matchstick
##
## Made by
## Login   <esceve@epitech.net>
##
## Started on  Thu Feb  16 14:54:21 2017
## Last update Tue Feb 21 21:38:49 2017 
##

CFLAGS	= 	-Wall -Wextra -g

SRC	=	./src/main.c				\
		./src/get_namefile.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_archive

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

auteur:
	echo $(USER) > auteur
