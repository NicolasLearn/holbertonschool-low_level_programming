#ifndef __MAIN_H__
#define __MAIN_H__

/*---------------------------------------------------------------------------*/
		/*LIBRAIRY*/
/*---------------------------------------------------------------------------*/

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*---------------------------------------------------------------------------*/
		/*PROTOTYPE*/
/*---------------------------------------------------------------------------*/

ssize_t read_textfile(const char *filename, size_t letters);
	int _putchar(char c);
	ssize_t clear_func(char *buf, int fd);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
	int _strlen(char *s);
	int close_func(int fd);
#endif
