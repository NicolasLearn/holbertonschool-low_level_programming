#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to be searched.
 *
 * Return: The index of value on success.
 * -1 if not found or array == NULL.
*/
int linear_search(int *array, size_t size, int value)
{
	int index = -1;

	if ((array) && (size > 0))
	{
		for (index = 0; index < ((int) size); index++)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			if (array[index] == value)
				break;
			else if (index == ((int) size - 1))
			{
				index = -1;
				break;
			}
		}
	}
	return (index);
}
