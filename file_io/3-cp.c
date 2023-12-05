#include "main.h"
#include <stdio.h>

/**
 *
*/
int main(int argc, char *argv[])
{
	int file_desc_from, file_desc_new;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_desc_from = open(argv[1], O_RDONLY);
	if ((argv[1] == NULL) || (file_desc_from == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_desc_new = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if ((argv[2] == NULL) || (file_desc_new == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if ((file_desc_from == -1) || (file_desc_new == -1))
	{

	}
}
