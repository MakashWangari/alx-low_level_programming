#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - function that duplicates string
 *
 * @str: strng to duplicate
 * Return: pointer to teh new string
 */
char *_strdup(char *str)
{
	char *dup;
	int index = 0, count;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[index])
	{
		index++;
	}
	dup = malloc(sizeof(char) * (index + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < index; count++)
	{
		dup[count] = str[count];
	}
	return (dup);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: Name of dog
 * @age: Age of dog.
 * @owner: Owner of dog
 *
 * Return: Void.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
