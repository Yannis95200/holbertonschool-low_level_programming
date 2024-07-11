#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
/**
 * _strlen -print
 * @s: is the variable
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;
	{
		return (length);
	}
}

/**
 * *_strcpy -print
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
/**
*new_dog -create a new dog
*@name: Name to set for the dog
*@age: Age to set for the dog
*@owner: Owner to set for the dog
*Return: Pointer to the new dog structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
	}

	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

