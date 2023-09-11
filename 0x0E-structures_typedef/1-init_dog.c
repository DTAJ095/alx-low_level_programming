#include "dog.h"
#include<stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the structure to initialize
 * @name: the dog's name
 * @age: his age
 * @owner: his owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
