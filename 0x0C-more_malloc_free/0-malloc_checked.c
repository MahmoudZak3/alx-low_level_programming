#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Creates an array of chars
 * @b: The specific char to intialize the array with.
 * Return:  a pointer to the array.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
