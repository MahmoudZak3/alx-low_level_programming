#include "main.h"

/**
 * print_alphabet_x10 - printing 10 time the alph, lower,
 * and ne line
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
