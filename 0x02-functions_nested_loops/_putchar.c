#include "main.h"
#include <unistd.h>
/**
 * _putchar - char to print .
 *
 * Return: 1 success  , -1 On error returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
