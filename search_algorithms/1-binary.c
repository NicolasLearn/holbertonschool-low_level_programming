#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to be searched.
 *
 * Return: The index of value on success.
 * -1 if not found or array == NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	int start = 0, middle = -1, end = ((int)size - 1), print_index;

	if ((array) && (size > 0))
	{
		while (start < end)
		{
			middle = (start + end) / 2;
			printf("Searching in array: ");
			for (print_index = start; print_index < end; print_index++)
				printf("%d, ", array[print_index]);
			printf("%d\n", array[print_index]);
			if (middle == value)
				return (middle);
			else if (value < middle)
				end = middle - 1;
			else
				start = middle + 1;
		}
	}
	return (-1);
}
