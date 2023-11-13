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
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include "main.h"

#endif
