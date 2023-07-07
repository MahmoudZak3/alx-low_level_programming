#include <stdio.h>

/**
 * main -> name of the program
 *
 * @argc: Size array arguments argv
 * @argv:  size argc
 *
 * Return: 0 Always sucsse
 */

int main(int argc __attribute__((unused)), char **argv)
{
	argc = 0;
	printf("%s\n", argv[argc]);
	return (0);
}
