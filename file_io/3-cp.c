#include "main.h"
#include <stdio.h>

/*---------------------------------------------------------------------------*/
		/*CLOSE_FILE*/
/*---------------------------------------------------------------------------*/

/**
 * close_file - close and check if the file is close.
 * @fd_1: file descriptor file 1.
 * @fd_2: file descriptor file 2.
*/
void close_file(int fd_1, int fd_2)
{
	if ((close(fd_1)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	if ((close(fd_2)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
}

/*---------------------------------------------------------------------------*/
		/*ERROR_FILE*/
/*---------------------------------------------------------------------------*/

/**
 * error_file - print error message and exit the function
 * @argv: pointer to the value of the argument
 * @exit_val: exit value matching with the error
*/
void error_file(char *argv[], int exit_val)
{
	char *str;
	int index;

	if (exit_val == 98)
	{
		str = "read from file";
		index = 1;
	}
	else
	{
		str = "write to";
		index = 2;
	}
	dprintf(STDERR_FILENO, "Error: Can't %s %s\n", str, argv[index]);
	exit(exit_val);
}

/*---------------------------------------------------------------------------*/
		/*MAIN*/
/*---------------------------------------------------------------------------*/

/**
 * main - copies the content of a file to another file.
 * @argc: number of parameter of compilation.
 * @argv: pointer array with pointer values of each argument.
 *
 * Return: always 0.
*/
int main(int argc, char *argv[])
{
	int file_desc_from, file_desc_new;
	ssize_t readed_char = 1024, writed_char;
	char buf_tab[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_desc_from = open(argv[1], O_RDONLY);
	if (file_desc_from == -1)
		error_file(argv, 98);
	file_desc_new = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT | O_APPEND, 0664);
	if (file_desc_new == -1)
		error_file(argv, 99);
	while (readed_char == 1024)
	{
		readed_char = read(file_desc_from, buf_tab, 1024);
		if (readed_char == -1)
			error_file(argv, 98);
		writed_char = write(file_desc_new, buf_tab, readed_char);
		if ((writed_char == -1) || (writed_char != readed_char))
			error_file(argv, 99);
	}
	close_file(file_desc_from, file_desc_new);
	return (0);
}
