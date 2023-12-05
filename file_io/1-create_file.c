#include "main.h"

/*---------------------------------------------------------------------------*/
		/*_STRLEN*/
/*---------------------------------------------------------------------------*/

/**
 * _strlen - count the number of character enter in param
 * @s: string to be checked
 *
 * Return: return the number of character of the string
 */
int _strlen(char *s)
{
	int sum = 0;

	while (s[sum] != '\0')
		sum++;
	return (sum);
}

/*---------------------------------------------------------------------------*/
		/*CLEAR_FUNC*/
/*---------------------------------------------------------------------------*/

/**
 * close_func - clear the funtion.
 * @fd: number of the file descriptor at closed.
 *
 * Return: always 0.
*/
int close_func(int fd)
{
	close(fd);
	return (-1);
}

/*---------------------------------------------------------------------------*/
		/*CREATE_FILE*/
/*---------------------------------------------------------------------------*/

/**
 * create_file - create file
 * @filename: pointer to the name of the created file
 * @text_content: pointer to the text of the created file
 *
 * Return: 1 on success. -1 if failed.
*/
int create_file(const char *filename, char *text_content)
{
	int file_desc = 0, len_str = 0;
	ssize_t written_char = 0;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file_desc < 3)
		return (close_func(file_desc));
	if (text_content == NULL)
		text_content = "";
	len_str = _strlen(text_content);
	written_char = write(file_desc, text_content, len_str);
	if ((written_char < 0) || (written_char != len_str))
		return (close_func(file_desc));
	close(file_desc);
	return (1);
}
