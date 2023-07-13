#include <stdlib.h>
#include "main.h"

/**
 * *_memset -  Allocates memory for an array of a certain number
 * @s: The byte size of each array element.
 * @b: character  copied
 * @n: The number of elements.
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number in the array
 * @size: The byte size of each array element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
