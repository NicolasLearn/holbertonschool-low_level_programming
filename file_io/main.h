#ifndef MAIN_H
#define MAIN_H

/*---------------------------------------------------------------------------*/
		/*LIBRAIRY*/
/*---------------------------------------------------------------------------*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/*---------------------------------------------------------------------------*/
		/*PROTOTYPE*/
/*---------------------------------------------------------------------------*/

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
	ssize_t clear_func(char *buf, int fd);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
	int _strlen(char *s);
	int close_func(int fd);
void close_file(int fd_1, int fd_2);
void error_file(char *argv, int exit_val);

#endif
