##
## Makefile for Makefile in /home/esceve/EPITECH/CPE/CPE_2016_matchstick
##
## Made by
## Login   <esceve@epitech.net>
##
## Started on  Thu Feb  16 14:54:21 2017
## Last update Sat Mar 04 13:34:23 2017 
##

CFLAGS	= 	-Wall -Wextra -g -Iinclude/ -O3 -fstack-protector --machine=avx

SRC	=	archive/src/main.c				\
		archive/src/get_namefile.c		\
		archive/src/extract_data.c		\
		archive/src/error_extract.c		\
		archive/src/put_data.c			\

SRC2	=	unarchive/src/main.c

OBJ	=	$(SRC:.c=.o)

OBJ2	=	$(SRC2:.c=.o)		

NAME	=	my_archive

NAME2	=	my_unarchive

all:	$(NAME)  $(NAME2)

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
