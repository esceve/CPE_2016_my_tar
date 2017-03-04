##
## Makefile for Makefile in /home/esceve/EPITECH/CPE/CPE_2016_matchstick
##
## Made by
## Login   <esceve@epitech.net>
##
## Started on  Thu Feb  16 14:54:21 2017
## Last update Sat Mar  4 13:18:29 2017 Augustin Lopacinski
##

CFLAGS	= 	-Wall -Wextra -g

SRC	=	./src/main.c				\
		./src/get_namefile.c		\
		./src/extract_data.c		\
		./src/error_extract.c		\
		./src/put_data.c		\

SRC2	=	./src2/main.c		\

OBJ	=	$(SRC:.c=.o)

OBJ2	=	$(SRC2:.c=.o)		

NAME	=	my_archive

NAME2	=	my_unarchive

all:	$(NAME) $(NAME2)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

$(NAME2):	$(OBJ2)
	gcc -o $(NAME2) $(OBJ2)


clean:
	rm -f $(OBJ) $(OBJ2)

fclean:
	rm -f $(OBJ) $(NAME) $(OBJ2) $(NAME2)

re: fclean all

auteur:
	echo $(USER) > auteur
