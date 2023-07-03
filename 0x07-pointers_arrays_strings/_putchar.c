#include "main.h"
#include <unistd.h>
/**
 * _putchar - print  chars output
 * @c: print chars
 *
 * Return: 1 if succes or 0 else if not succes On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
