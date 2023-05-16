#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes each element
 *                with the specified character
 *
 * @size: size of the array
 * @c: character used to initialize each element
 *
 * Return: On success, a pointer to the allocated array. Otherwise, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
	{
	return (NULL);
	{

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}
