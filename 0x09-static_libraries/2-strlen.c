#include "main.h"
/**
* _strlen - a string to search .
* @s: pointer string search .
* Return: string pointer.
*/

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
