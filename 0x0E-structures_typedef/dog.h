#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - basic dog structure
 * Description: data structure for dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
