#include "3-calc.h"
#include <ctype.h>

/**
 * main - entry point, calcul two integer
 *
 * Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	int (*adress)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((num1 == 0) || (num2 == 0))
	{
		printf("Error\n");
		exit(99);
	}
	adress = (*get_op_func(argv[2]));
	if (adress == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", adress(num1, num2));
	return (0);
}
