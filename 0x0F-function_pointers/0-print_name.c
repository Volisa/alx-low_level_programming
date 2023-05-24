#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: the string to be printed
 * @f: pointer to the  function
 * Return: void
 **/

void print_name (char *name, void (*f)(char *))
{
	f(name);
}
