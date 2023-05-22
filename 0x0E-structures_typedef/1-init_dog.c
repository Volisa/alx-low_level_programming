#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 *@d: initialize pointer to struct dog
 *@name: initialize name of dog
 *@age: initialize age of dog
 *@owner: initialize owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
