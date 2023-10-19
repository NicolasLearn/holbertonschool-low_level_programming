#include "main.h"

/**
 * _isupper - checks if character is upper
 * @c: character to be checked
 *
 * Return: return 1 if uppercase. 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	} else
	{
		return (0);
	}
}
