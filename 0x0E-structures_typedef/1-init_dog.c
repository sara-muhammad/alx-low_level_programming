#include <stdio.h>
#include "dog.h"
#include<stdlib.h>

/**
 * init_dog - check the code
 * @d:copy from dog struct
 * @name:first element
 * @age:the second
 * @owner:the third
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
