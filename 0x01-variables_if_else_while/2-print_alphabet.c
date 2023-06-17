#include <stdio.h>

/**
 * main -  alpha entry .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cr[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(cr[i]);
	putchar('\n');
	return (0);
}

