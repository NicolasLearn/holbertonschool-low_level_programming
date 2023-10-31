#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string to be convert
 *
 * Return: the integer convert
 */
int _atoi(char *s)
{
	int i, j, count, sign;
	unsigned int result;

	sign = 0;
	count = 0;
	result = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = i + 1;
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			result = (result * 10) + (s[i] - '0');
			count++;
		}
		if ((count > 0) && ((s[j] < '0') || (s[j] > '9')))
			break;
		if (s[i] == '-')
			sign++;
	}
	if ((sign % 2) == 0 || (sign == 0))
		sign = +1;
	else
		sign = -1;
	sign = result * sign;
	return (sign);
}
