#include "main.h"

/**
 * _strncpy - Copies  copy a string a string up to @n bytes
 *
 * @dest: Destination stringinput value
 *
 * @src: input valuecontains content to be copied
 *
 * @n: Num of bytes  copied to dest
 *
 * Return: Pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

