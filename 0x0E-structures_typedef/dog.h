#ifndef dog_h
#define dog_h
#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - a struct to discribe a dog
 *@name: dog's name
 *@age:  dog's age
 *@owner: dog's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


#endif
