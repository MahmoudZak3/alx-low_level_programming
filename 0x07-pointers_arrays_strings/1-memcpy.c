#include "main.h"
/**
 *_memcpy - a func  coping Memo area
 *@dest: Memo to store
 *@src: Memo to copy
 *@mm: amount of bytes
 *Return: coping Memo
 */
char *_memcpy(char *dest, char *src, unsigned int mm)
{
	int hh = 0;
	int uu = mm;

	for (; hh < uu; hh++)
	{
		dest[hh] = src[hh];
		mm--;
	}
	return (dest);
}
