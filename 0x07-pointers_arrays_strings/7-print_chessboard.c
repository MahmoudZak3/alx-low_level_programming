#include "main.h"
/**
 * print_chessboard - code enter
 * @a: array
 * Return: 0 (Success) else 1
 */
void print_chessboard(char (*a)[8])
{
	int uu;
	int j;

	for (uu = 0; uu < 8; uu++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[uu][j]);
		_putchar('\mm');
	}
}
