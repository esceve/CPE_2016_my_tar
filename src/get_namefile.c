/*
** get_namefile.c for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/src
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Fri Mar  3 21:34:27 2017 
** Last update Fri Mar  3 21:34:27 2017 
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char **get_filename(char **arg_file, int count_file)
{
	char **list_file;
	int size_file;
	int i;

	size_file = 0;
	i = 0;
list_file = malloc(sizeof(char) * count_file);
while (i != count_file)
{
	size_file = strlen(arg_file[count_file]);
	printf()
}

return (list_file);
}