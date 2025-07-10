#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - structure with name, age, owner
 * dog_t - new name for type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

	typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _dog_h_ */
