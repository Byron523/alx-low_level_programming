#include "dog.h"

/**
* free_dog - frees memory allocated for dog
* @d: struct for a dog
* Return: nonthing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
