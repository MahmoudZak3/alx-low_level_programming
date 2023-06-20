#include "main.h"

/**
 * print_alphabet_x10 - printing  alpha chars 10 , in lowercase,
 * ending by a new line
 */
void print_alphabet_x10(void)
{
	char t;
	int x;

	x = 0;

	while (x < 10)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		x++;
	}
}
