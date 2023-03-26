#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the parameter
 * @age: the age parameter
 * @owner: the owner parameter
 * Return: the dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	/* Allocate memory for the name and copy the string */
	dog->name = (char *) malloc(strlen(name) + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	/* Allocate memory for the owner and copy the string */
	dog->owner = (char *) malloc(strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner, owner);

	/* Set the age and return the dog_t pointer */
	dog->age = age;

	return (dog);
}
