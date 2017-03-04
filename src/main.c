/*
** main.c for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Mar  3 21:18:05 2017
** Last update Sat Mar  4 12:58:35 2017 Augustin Lopacinski
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/include.h"
#include "../include/file_content.h"

int main(int ac, char **av)
{
  t_file_content *file;
  file = NULL;
  char **list_file;

  printf("[INFO] start program !\n");
  if (ac < 3)
    {
      printf("Usage: ./my_archive [archive_name] [files ...]\n");
    }
  if (ac > 2)
    {
      list_file = get_filename(av, ac);
      file = extract_data(list_file, ac);
      pop_data(file, ac, av[1]);
    }
    printf( "[INFO] program end without error !\n");
    return (0);
}
