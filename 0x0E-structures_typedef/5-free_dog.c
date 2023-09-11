#include "dog.h"
#include<stdlib.h>
#include "main.h"

/**
 * free_dog - function that frees dogs.
 * @d: the structure
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
