#include "main.h"
/**
 * _strstr - code enter
 * @haystack: entering
 * @needle: entering
 * Return: 0 (Success) else 1
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *iii = haystack;
		char *ttt = needle;

		while (*iii == *ttt && *ttt != '\0')
		{
			iii++;
			ttt++;
		}

		if (*ttt == '\0')
			return (haystack);
	}

	return (0);
}
