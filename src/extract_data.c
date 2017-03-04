
/*
** extract_data.c for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Mar  3 23:50:21 2017
** Last update Sat Mar  4 01:42:52 2017 Augustin Lopacinski
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


t_file_content		*extract_data(char **file_content, int count)
{
  int i;
  int fd;
  t_file_content *data_file;
  struct stat filestat;
  char *buffer;
  int test;

  i = 2;
  fd = 0;
  data_file = malloc(sizeof(t_file_content) * (count - 1));
  while (i != count)
    {
      test = open(file_content[i], O_RDONLY);
      error_extract(test, file_content[i]);
      stat(file_content[i], &filestat);
      data_file[i].size = filestat.st_size;
      data_file[i].name = malloc(sizeof(char) * strlen(file_content[i]));
      data_file[i].name = file_content[i];
      buffer = malloc(sizeof(char) * data_file[i].size);
      read(test, buffer, data_file[i].size);
      data_file[i].data = malloc(sizeof(char) * data_file[i].size);
      data_file[i].data = buffer;
      printf("file name : %s\n", );
      printf("filecontent[%d] : %s\n", i, file_content[i]);
      printf("filesize : %lu\n", data_file[i].size);
      printf("value of filecontent[%d] : %s\n", i, data_file[i].data);
      close(fd);
      i++;
    }

  return (data_file);
}
