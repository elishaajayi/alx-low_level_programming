#ifndef DOG_H
#define DOG_H

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

/**
 * dog_t - new type for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
