#include <stdio.h>

/**
 * main - Print combination.
 *
 * describtion:  single-digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	for (r = 48; r < 58; r++)
	{
		putchar(r);
		if (r != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
