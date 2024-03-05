#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog - create a new dog =)
 *@name: entry string name
 *@age: entry float age
 *@owner: entry string owner
 *Return: pointer of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ndog;
	char *np, *op;

	np = malloc(sizeof(char) * strlen(name) + 1);

	if (np == NULL)
		return (NULL);

	strcpy(np, name);

	op = malloc(sizeof(char) * strlen(owner) + 1);

	if (op == NULL)
	{
		free(np);
		return (NULL);
	}

	strcpy(op, owner);

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	{
		free(op);
		free(np);
		return (NULL);
	}

	(*ndog).name = np;
	(*ndog).owner = op;
	(*ndog).age = age;


	return (ndog);
}
