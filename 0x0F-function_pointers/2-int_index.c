#include "function_pointers.h"
/**
 * int_index - return to place of index if comparison is true, else -1
 * @array: which array
 * @size: the size of the elems in the array
 * @cmp: pointer to 1/3 funct in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
