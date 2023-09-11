#include "dog.h"
#include "main.h"
#include<stdlib.h>
/**
 * _copy  -   Make a copy of passed in argument
 * @src:      Data to make copy of
 * Return:    Pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}

	ptr[i] = '\0';
	return (ptr);
}
/**
 * *new_dog - function that creates a new dog
 * @name: the dog's name
 * @age: his age
 * @owner: his owner
 *
 * Return: pointer to the newly dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cp_name, *cp_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	cp_name = _copy(name);
	if (cp_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).name = cp_name;

	(*new_dog).age = age;

	cp_owner = _copy(owner);
	if (cp_owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	(*new_dog).owner = cp_owner;

	return (new_dog);
}
