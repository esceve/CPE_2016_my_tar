//
// file_content.h for my_tar in /home/esceve/EPITECH/CPE/CPE_2016_my_tar/include
// 
// Made by 
// Login   <esceve@epitech.net>
// 
// Started on  Fri Mar  3 22:10:19 2017 
// Last update Fri Mar  3 22:10:19 2017 
//

#ifndef FILE_CONTENT_H_
# define FILE_CONTENT_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

typedef struct	s_file_content
{
  char		name[100];
  char		mode[8];
  char		uid[8];
  char		gid[8];
  char		size[12];
  char		mtime[12];
  char		chksum[8];
  char		typeflag;
  char		linkname[100];
  char	        magic[6];
  char		version[3];
  char		u_name[32];
  char		g_name[32];
  char		devmajor[8];
  char		devminor[8];
  char		prefix[167];
}		t_file_content;

#endif /* FILE_CONTENT_H_ */