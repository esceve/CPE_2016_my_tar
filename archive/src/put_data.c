/*
** put_data.c for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Sat Mar  4 01:47:58 2017
** Last update Sat Mar  4 01:47:58 2017
*/

#include "../include/include.h"
#include "../include/file_content.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

void		pop_data(t_file_content *file, int count, char *file_name)
{
  FILE *fp;
  int i;
  size_t size;

  i = 2;
  size = 0;
  printf( "[INFO] create and open file named  : %s\n", file_name);
  fp = fopen(file_name, "w+");
  while (i != count)
    {
      printf("[INFO] archived file : %s\n", file[i].name);
      printf("[DEBUG] put name\n");
      size = strlen(file[i].name) + 1;
      fwrite(&size, sizeof(size), 1, fp);
      fwrite(file[i].name, 1, size, fp);
      printf( "[DEBUG] put size\n");
      size = strlen(file[i].size) + 1;
      fwrite(&size, sizeof(size), 1, fp);
      fwrite(file[i].size, 1, size, fp);
      printf( "[DEBUG] put data\n");
      size = strlen(file[i].data) + 1;
      fwrite(&size, sizeof(size), 1, fp);
      fwrite(file[i].data, 1, size, fp);
      i++;
    }
  fclose(fp);
  printf( "[INFO] close file named : %s\n", file_name);
}