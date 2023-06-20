#include "main.h"

/**
 * printing : print alpha 10 times .
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
