#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc checked
 * @b: - memory to bel allocated
 *
 * Return: pointer to memory termination if error
 */

void *malloc_checked(unsigned int b)
{
	 void *p;
	
	 p = malloc_checked(b);
	
	 if (p == NULL)
		 return (98);
	 return (p);
}
