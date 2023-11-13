#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type "struct"
 * @d: adress of struct at initialized
 * @name: name of the struct
 * @age: age of the struct
 * @owner: owner of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (age < 0)
		exit(1);
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
