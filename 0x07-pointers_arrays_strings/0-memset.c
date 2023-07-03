#include "main.h"
/**
 * _memset -  Memo fill a block nums
 * @s: start Addr of Memo for filled
 * @b: the wanted nums
 * @n: amount of bytes for changed
 * Return:  array  nums  n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
