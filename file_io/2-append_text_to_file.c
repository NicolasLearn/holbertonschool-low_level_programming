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
	if (fd != -1)
		close(fd);
	return (-1);
}

/*---------------------------------------------------------------------------*/
		/*APPEND_TEXT_TO_FILE*/
/*---------------------------------------------------------------------------*/

/**
 * append_text_to_file - append text at the end of the file.
 * @filename: pointer to the name of the created file.
 * @text_content: pointer to the string to add at the end of the file.
 *
 * Return: 1 on success. -1 if failed.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc = -1, len_str = 0;
	ssize_t written_char = -1;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
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
