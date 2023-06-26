#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - the string pointed to by src copies.
 * @dest: str copy to
 * @src: copy to str .
 * Return: str .
 */
char *_strcpy(char *dest, char *src)
{
int count = 0;
while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
