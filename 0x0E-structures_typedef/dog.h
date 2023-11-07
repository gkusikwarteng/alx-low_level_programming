#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This structure defines a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
