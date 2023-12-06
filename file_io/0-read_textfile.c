#include "main.h"

/**
 * clear_func - clear the funtion
 * @buf: pointer to the malloc allocation
 * @fd: number of the file descriptor at closed
 *
 * Return: always 0.
*/
ssize_t clear_func(char *buf, int fd)
{
	free(buf);
	buf = NULL;
	if (fd != -1)
		close(fd);
	return (0);
}
/*---------------------------------------------------------------------------*/

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: pointer to the text file to manipulate
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 * Or 0 if failed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readed_char = 0, printed_char = 0;
	int file_desc = 0;
	char *buf_tab;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	buf_tab = malloc(sizeof(char) * letters);
	if ((file_desc == -1) || (buf_tab == NULL))
		return (clear_func(buf_tab, file_desc));
	readed_char = read(file_desc, buf_tab, letters);
	if (readed_char < 0)
		return (clear_func(buf_tab, file_desc));
	printed_char = write(STDOUT_FILENO, buf_tab, readed_char);
	if ((printed_char < 0) || (printed_char != readed_char))
		return (clear_func(buf_tab, file_desc));
	clear_func(buf_tab, file_desc);
	return (printed_char);
}
