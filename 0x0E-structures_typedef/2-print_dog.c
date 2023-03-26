#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: the stuct name
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));

	}

}
