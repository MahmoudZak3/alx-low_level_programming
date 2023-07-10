#include "main.h"
#include <unistd.h>
/**
 * _putchar - output  c to stdout
 * @c: The char to print
 * Return:  1 if success , 0 else .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
