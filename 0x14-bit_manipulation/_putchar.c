#include "main.h"
#include <unistd.h>

/**
 * _putchar -t char c to stdut
 * @c:  char to print
 * Return: always 1.
 * On error,  return -1 ero errno.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
