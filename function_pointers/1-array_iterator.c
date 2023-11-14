#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print an array of int given in argument with funct pointer
 * @array: array at print
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL) || (size <= 0) || (action == NULL))
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}
