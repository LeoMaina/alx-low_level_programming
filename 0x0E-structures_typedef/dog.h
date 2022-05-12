#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 *
 */
typedef struct dog dog_t;

/**
 * struct dog - Description
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
