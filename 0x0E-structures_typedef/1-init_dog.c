#include "dog.h"

/**
* init_dog - function that initialize a name e
* @d: a struct called dog
* @name: dog name
* @age: age of a dog
* @owner: wog owner
* Return: non
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
};

#endif
