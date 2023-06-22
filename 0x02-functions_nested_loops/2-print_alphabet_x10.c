#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet_x10 - printing 10 time the alph, lower,
 * and ne line
=======
 * print_alphabet_x10 - printing  alpha chars 10 , in lowercase,
 * ending by a new line
>>>>>>> 6b1d049b6ccf4511f8a6e369e856a7fd54f9cd75
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
