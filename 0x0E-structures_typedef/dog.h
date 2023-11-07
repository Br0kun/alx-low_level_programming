#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structur dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * This structure defines the basic information about a dog,
 */
struct dog
{
	char *name;
	float age; 
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
