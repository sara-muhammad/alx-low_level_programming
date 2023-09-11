#ifndef DOG_H
#define DOG_H

#include<stdio.h>

/**
 * struct dog - structure
 * @name:first element
 * @age:second element
 * @owner:third element
 * Description : it contains data of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
