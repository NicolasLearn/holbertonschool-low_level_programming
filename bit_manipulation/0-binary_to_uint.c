#include "main.h"

/**
 * check_str - count the number of char into the string, check if "s" != NULL,
 * and if the char is "0" or "1".
 * @s: string to be checked
 *
 * Return: return the number of character is sucess.
 * 0 if "s" == NULL or if other char allowed is found
 */
int check_str(const char *s)
{
	int len_str = 0;

	if (s == NULL)
		return (len_str);
	while (s[len_str] != '\0')
	{
		if ((s[len_str] != '0') && (s[len_str] != '1'))
		{
			len_str = 0;
			break;
		}
		len_str++;
	}
	return (len_str);
}

/*---------------------------------------------------------------------------*/

/**
 * binary_to_uint - converts a binary number to an "unsigned int"
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number.
 * Or 0 if :
 * -there is one or more chars in the string b that is not 0 or 1
 * -b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, value_decimal = 1;
	int index_str = (check_str(b) - 1);

	if (index_str == -1)
		result = 0;
	else
	{
		for (result = 0; index_str >= 0; index_str--)
		{
			if (b[index_str] == '1')
				result += value_decimal;
			value_decimal *= 2;
		}
	}
	return (result);
}
