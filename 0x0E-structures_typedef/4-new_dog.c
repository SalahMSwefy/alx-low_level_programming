#include "dog.h"

/**
 *_strlen -a function that return the length of a string.
 *@s: is a string
 *Return: return lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}

	return (i);
}

/**
 **_strcpy -a function that copies the string pointed
 *@dest: is a string
 *@src: is a string
 *Return: no return
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;

	return (dest);
}

/**
 *new_dog - creates a new dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *Return: returns NULL in case of failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (doggo);
}
