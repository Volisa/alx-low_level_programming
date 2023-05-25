#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - each array printed on a new line
 * @array: chosen array
 * @size: number of elements to print
 * @action: print pointers hex or regular
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
