#include "main.h"

/**
 * _strlen ->  Length input
 *
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 else
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 1);
}

/**
 * _compare -> - checks a characters recursively
 *
 * @s: Inpute string to reverse
 * @len: String Length
 *
 * Return: length
 */

int _compare(char *s, int len)
{
	if (len < 1)
		return (1);
	if (*s == *(s + len))
	{
		s++;
		len -= 2;
		return (_compare(s, len));
	}
	return (0);
}

/**
 * is_palindrome -> checks the for palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len;

	 len = _strlen(s) - 1;
	return (_compare(s, len));
}
