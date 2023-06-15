#include<stdio.h>
/**
 * main - Entry point
 * Description: 101-quote.c
 *
 * Return: Always 1 (Not Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, 59);
	return (1);
}
