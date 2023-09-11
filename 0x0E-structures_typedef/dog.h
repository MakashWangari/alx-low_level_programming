#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog details
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog.
 *
 * Description: struct with dog details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif