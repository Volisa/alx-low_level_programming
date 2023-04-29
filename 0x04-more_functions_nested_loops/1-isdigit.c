#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int_isdigit(int c)
{
	if (c >= 'o' && c <= '9')
		return (1);
	else
		return (0);
}
