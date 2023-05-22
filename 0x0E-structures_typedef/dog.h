#ifndef DOG_H
#define DOG_H

#include <stdio.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog doge;

	doge.name = "Spot";
	doge.age = 6;
	doge.owner = "Liesbet Voigt";

	printf("Name: %s\n", doge.name);
	printf("Age: %.1f\n", doge.age);
	printf("Owner: %s\n", doge.owner);

	return (0);
}
