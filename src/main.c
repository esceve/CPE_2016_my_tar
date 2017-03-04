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
#include "../include/include.h"
#include "../include/file_content.h"

int main(int ac, char **av)
{
t_file_content *file;
file = NULL;
  char **list_file;
  if (ac < 3)
    {
      printf("Usage: ./my_archive [archive_name] [files ...]\n");
    }
  if (ac > 2)
    {
      list_file = get_filename(av, ac);
      file = extract_data(list_file, ac);
      pop_data(file, ac - 1, av[1]);
    }
    // int i = 2;
    // while (i != ac)
    // {
    //   printf("name : %s\n",file[i].name);
    //   printf("size : %s\n",file[i].size);
    //   printf("data : %s\n\n",file[i].data);
    //   i++;
    // }
    return (0);
}