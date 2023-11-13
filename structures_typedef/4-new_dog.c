#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strlen - count the number of character enter in param
 * @s: string to be checked
 *
 * Return: return the number of character of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copie the strings from 'src', include '\0' to 'dest
 * @dest: destination for the copy of the string
 * @src: source of the strings at copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create a new struct of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new struct. or NULL is failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	dog = malloc(sizeof(dog_t));
	len_name = _strlen(name);
	len_owner = _strlen(owner);
	if ((dog == NULL) || (len_name == 0) || (len_owner == 0))
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(len_name + 1);
	dog->owner = malloc(len_owner + 1);
	if ((dog->name == NULL) || (dog->owner == NULL))
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
