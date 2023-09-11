#include "dog.h"
#include "main.h"
#include<stdlib.h>

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
	int len_n = 0, len_o = 0, i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_n])
		len_n++;
	while (owner[len_o])
		len_o++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cp_name = malloc(sizeof(char) * (len_n + 1));
	if (cp_name == NULL)
		return (NULL);
	for (; name[i]; i++)
		cp_name[i] = name[i];
	cp_name[i] = '\0';
	cp_owner = malloc(sizeof(char) * (len_o + 1));
	if (cp_owner == NULL)
		return (NULL);
	for (; owner[i]; i++)
		cp_owner[i] = owner[i];
	cp_owner[i] = '\0';

	new_dog->name = cp_name;
	new_dog->age = age;
	new_dog->owner = cp_owner;
	return (new_dog);
}
