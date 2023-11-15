#include "3-calc.h"

/**
 * op_add - add two integer
 * @a: first number
 * @b: seconde number
 *
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two integer
 * @a: first number
 * @b: seconde number
 *
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integer
 * @a: first number
 * @b: seconde number
 *
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integer
 * @a: first number
 * @b: seconde number
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - divide two integer
 * @a: first number
 * @b: seconde number
 *
 * Return: rest of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
