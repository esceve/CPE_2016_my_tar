/*
** error_extract.c for error extrat in /home/Spaciwork/CPE_2016_my_tar/src
** 
** Made by Augustin Lopacinski
** Login   <Spaciwork@epitech.net>
** 
** Started on  Sat Mar  4 00:22:42 2017 Augustin Lopacinski
** Last update Sat Mar  4 01:42:39 2017 Augustin Lopacinski
*/

#include "../include/include.h"
#include "../include/file_content.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	error_extract(int test, char *file)
{
  if (test == -1)
    {
      printf("file not found: %s\n", file);
      exit(84);
    }
}
