/*
** main.c for main.c in /home/Spaciwork/CPE_2016_my_tar/src2
** 
** Made by Augustin Lopacinski
** Login   <Spaciwork@epitech.net>
** 
** Started on  Sat Mar  4 12:51:05 2017 Augustin Lopacinski
** Last update Sat Mar 04 13:39:33 2017 
*/

#include "../include/file_content.h"

int	main(int ac, char **av)
{
  t_file_content unarch;
  char **list_file;

  if (ac < 3)
    printf("Usage: ./my_unarchive [archive_name] [files ...]\n");
  if (ac > 2)
    {
      printf("ok");
      //list_file2 = get_filename(av, av);
      //unarch = unextract_data(list_file, ac);
    }
}
