#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates a new copy of a string in memory
 * @str: the string to be copied
 *
 * Return: a pointer to the newly created string, or NULL if unsuccessful
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* determine the length of the string */
	while (str[len] != '\0')
		len++;

	/* allocate memory for the copy */
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	/* copy the string */
	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
