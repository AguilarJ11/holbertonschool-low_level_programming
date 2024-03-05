#include "dog.h"
#include <stdlib.h>

/**
 *s_largo - cuenta s
 *@s: entry string
 *Return: largo string
 */

int s_largo(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}

/**
 *s_copy - copia s en ds
 *@s: entry string
 *@ds: entry string
 *Return: ds con el contenio de s
 */

char *s_copy(char *ds, char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		ds[c] = s[c];
	}

	ds[c] = '\0';

	return (ds);
}

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

	np = malloc(sizeof(char) * (s_largo(name) + 1));

	if (np == NULL)
		return (NULL);

	s_copy(np, name);

	op = malloc(sizeof(char) * (s_largo(owner) + 1));

	if (op == NULL)
	{
		free(np);
		return (NULL);
	}

	s_copy(op, owner);

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
