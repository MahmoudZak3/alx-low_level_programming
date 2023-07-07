#include "main.h"
/**
 * _strchr - code enter
 * @s: entering
 * @c: entering
 * Return:  0 (Success), else 1
 */
char *_strchr(char *s, char c)
{
	int uu = 0;

	for (; s[uu] >= '\0'; uu++)
	{
		if (s[uu] == c)
			return (&s[uu]);
	}
	return (0);
}
