#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - operations Prints the result of simple operations between intergers
 * @argv: argument The number of arguments supplied to the  value array
 * @argc: An array of pointers to the arguments argument counter
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
int num1, num2, op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op = (*get_op_func(argv[2]))(num1, num2);
printf("%d\n", op);
return (0);
}
