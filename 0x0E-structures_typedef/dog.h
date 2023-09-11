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

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
