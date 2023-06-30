#include <unistd.h>
#include "main.h"

/**
 * _putchar - stdout the character c
 *
 * @c: the char to printed
 *
 * Return: 1 (success), -1 1 is returned (error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
