/*
** include.h for my.h in /home/Spaciwork/CPE_2016_my_tar
** 
** Made by Augustin Lopacinski
** Login   <Spaciwork@epitech.net>
** 
** Started on  Sat Mar  4 11:51:58 2017 Augustin Lopacinski
** Last update Sat Mar  4 11:52:03 2017 Augustin Lopacinski
*/


#ifndef INCLUDE_H_
#define INCLUDE_H_

#include "./file_content.h"

char		**get_filename(char **, int);
void		error_extract(int,char *);
t_file_content	*extract_data(char **, int);
void		pop_data(t_file_content *, int , char *);
int	        main(int ac, char **av);

#endif /* INCLUDE */
