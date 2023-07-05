#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writing a Char c to stdout
 * @c: a Char to print
 *
 * Return: On accepted 1.
 * On error, -1 is return back, and errore is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
