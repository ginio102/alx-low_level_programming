#include<stdlib.h>
#include"dog.h"
/**
 * init_dog - variable of type struct dog
 * @d: pointer
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
