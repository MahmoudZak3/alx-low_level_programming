#include "main.h"
#include <stdio.h>

/**
 * main - checking the code.
 *
 * Return: 1 if succes or 0 else if not succes Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
