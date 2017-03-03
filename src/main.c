/*
** main.c for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Mar  3 21:18:05 2017
** Last update Fri Mar  3 21:18:05 2017
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{

  char **list_file;
  if (ac < 3)
    {
      printf("Usage: ./my_archive [archive_name] [files ...]\n");
    }
  if (ac > 2)
    {
      printf("in function\n");
      list_file = get_namefile(av, ac -1);
    }
}