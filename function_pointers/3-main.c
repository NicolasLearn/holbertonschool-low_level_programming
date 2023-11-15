#include "3-calc.h"
#include <ctype.h>

/**
 * main - entry point, calcul two integer
 * @argc: number of function argument
 * @argv: pointer array which contain value of arguments
 *
 * Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(isdigit(argv[1][0])) || !(isdigit(argv[3][0])))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][1] != '\0') || ((*get_op_func(argv[2])) == NULL))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
