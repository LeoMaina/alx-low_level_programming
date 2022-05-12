#include "dog.h"

/**
 * init_dog - initialize avariable of type struct dog
 *
 * @d: first member
 * @name: second member
 * @age: third memebr
 * @owner: fourth member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
