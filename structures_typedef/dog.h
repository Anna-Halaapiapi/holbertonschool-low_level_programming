#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - structure with name, age, owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _dog_h_ */
