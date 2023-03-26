#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog header file
 * @name: the name parameter
 * @age: the age parameter
 * @owner: the owner parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
