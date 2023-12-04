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
	close(fd);
	free(buf);
	return (0);
}
/*---------------------------------------------------------------------------*/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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

	file_desc = open(filename, O_RDONLY);
	buf_tab = malloc(sizeof(char) * letters);
	if ((filename == NULL) || (file_desc < 0) || (buf_tab == NULL))
		return(clear_func(buf_tab, file_desc));
	readed_char = read(file_desc, buf_tab, letters);
	if (readed_char < 0)
		return(clear_func(buf_tab, file_desc));
	printed_char = write(STDOUT_FILENO, buf_tab, readed_char);
	if ((printed_char < 0) || (printed_char != readed_char))
		return(clear_func(buf_tab, file_desc));
	if ((size_t)readed_char < letters)
		printed_char += _putchar('\n');
	close(file_desc);
	free(buf_tab);
	return (printed_char);
}
