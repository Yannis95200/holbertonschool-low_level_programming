#ifndef DOG_H
#define DOG_H


/**
 * struct dog - variable pour d√crire un chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: le propri√taire du chien
 */


struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
