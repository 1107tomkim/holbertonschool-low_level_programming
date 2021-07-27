#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dog
 * @d: Struct Dog
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
