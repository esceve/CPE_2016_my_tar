
/*
** extract_data.c for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Mar  3 23:50:21 2017
** Last update Fri Mar  3 23:50:21 2017
*/

#include "../include/include.h"
#include "../include/file_content.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


t_file_content		*extract_data(char **file_content, int count)
{
  int i;
  int fd;
  t_file_content *data_file;
  struct stat filestat;
  unsigned long toto;

  i = 1;
  fd = 0;
  data_file = malloc(sizeof(t_file_content) * (count - 1));
  while (i != count)
    {
      // fd = open(file_content[i], O_RDONLY);
      stat(file_content[i], &filestat);
      toto = filestat.st_size;
      printf("filecontent[%d] : %s\n", i, file_content[i] );
      printf("filesize : %lu\n", toto);
      close (fd);
      i++;
    }

  return (data_file);
}