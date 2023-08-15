#include "dog.h"

/**
 *print_dog -  a function that prints a struct dog
 *@d: dog information
 *Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");
		if ((*d).age > 0)
			printf("Age: %s\n", d->age);
		else
			printf("nil\n");
		if ((*d).owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}
