#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Returns the remainder of the division
 * @a: first interger num
 * @b: second interger num
 * Return: sum The quotient of a and b. of intergers
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - remainder  subtracting  two intergers
 * @a: num first interger
 * @b: num second interger
 * Return: sum The quotient of a and b product of operation
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_div -division  two intergers nums
 * @a: num first interger
 * @b: num second interger
 * Return: dividsor product of operation
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mul - result multiplying  two intergers
 * @a: nums  first interger
 * @b: nums  second interger
 * Return: divided product of operation
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_mod - remainder of the division of two argueny
 * @a: argu first interger
 * @b: argu  second interger
 * Return:  result of operation
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
