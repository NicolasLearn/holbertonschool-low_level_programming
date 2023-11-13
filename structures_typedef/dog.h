#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - struct for informartion of a dog
 * @name: name of the dof (type char *)
 * @age: age of the dog (type float)
 * @owner: owner of the dog (type char *)
 *
 * Description: the struct allowed to give information on a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include "main.h"

#endif
