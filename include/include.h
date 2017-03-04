//
// include.h for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/include
//
// Made by
// Login   <esceve@epitech.net>
//
// Started on  Fri Mar  3 22:33:11 2017
// Last update Fri Mar  3 22:33:11 2017
//

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include "./file_content.h"

char		**get_filename(char **, int);
void		error_extract(int,char *);
t_file_content	*extract_data(char **, int);


#endif /* INCLUDE */