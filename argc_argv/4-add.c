#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry function, add positive numbers
 * @argc: number of argument of executable
 * @argv: array contain value arguments of executable
 *
 * Return: 0 if sucess. 1 if one argument is not a number.
 */
int main(int argc, char *argv[])
{
	int i, j, total;

	total = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
