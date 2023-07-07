#include <stdio.h>

/**
 * main -> print the number of arguments  Program
 *
 * @argc: Size number of arguments array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always Success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int num;

	num = argc - 1;
	printf("%d\n", num);
	return (0);
}
