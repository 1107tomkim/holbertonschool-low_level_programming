#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a variable
 * of type struct dog
 * @d: struct
 * @name: Pointer holding name
 * @age: Float value of age
 * @owner: Pointer holding owner name
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
