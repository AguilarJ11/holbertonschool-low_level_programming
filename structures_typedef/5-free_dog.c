#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - free d an dog_t type
 *@d: entry dog_t type
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}

}

