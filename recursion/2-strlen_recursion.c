#include "main.h"

/**
 * _strlen_recursion - return the lenght of string
 * @s: string at counted
 *
 * Return: the number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
