#include "dog.h"
#include <stdlib.h>

/**
* new_dog - create a new dog
* @name: dogs name
* @age: dogs age
* @owner: dog owner
* Return: a struct or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *knew_dog;
	int i, knew_name, knew_owner;

	knew_dog = malloc(sizeof(*knew_dog));
	if (knew_dog == NULL || !(knew_name) || !(knew_owner))
	{
		free(knew_dog);
		return (NULL);
	}

	for (knew_name = 0; name[knew_name]; knew_name++)
		;

	for (knew_owner = 0; name[knew_owner]; knew_owner++)
		;

	knew_dog->name = malloc(knew_name + 1);
	knew_dog->owner = malloc(knew_owner + 1);

	if (!(knew_dog->name) || !(knew_dog->owner))
	{
		free(knew_dog->owner);
		free(knew_dog->name);
		free(knew_dog);
		return (NULL);
	}

	for (i = 0; i < knew_name; i++)
		knew_dog->name[i] = name[i];
	knew_dog->name[i] = '\0';

	knew_dog->age = age;

	for (i = 0; i < knew_owner; i++)
		knew_dog->owner[i] = owner[i];
	knew_dog->owner[i] = '\0';

	return (knew_dog);
}
