#include "dog.h"
#include "main.h"

/**
 * init_dog - initialize a variable of type "struct"
 * @d: adress of struct at initialized
 * @name: name of the struct
 * @age: age of the struct
 * @owner: owner of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
