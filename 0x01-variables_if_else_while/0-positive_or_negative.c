#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: generate random numbers and print whether they are positive,
 * zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int num;

        srand(time(0));
        num = rand() - RAND_MAX / 2;
        if (num > 0)
        {
                printf("%d is positive\n", num);
        }
        else if (num == 0)
        {
                printf("%d is zero\n", num);
        }
        else
        {
                printf("%d is negative\n", num);
        }

        return (0);
}
