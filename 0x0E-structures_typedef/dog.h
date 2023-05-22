#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details about dog
 * @name: dog's name
 * @age: dog's age
 * @owner:dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef dog
 */
typedef struct dog doge;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(doge *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
