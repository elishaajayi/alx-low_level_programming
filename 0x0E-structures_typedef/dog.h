#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - simple dog structure
 * @name: of dog
 * @age: of dog, float
 * @owner: who lost their dog
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
