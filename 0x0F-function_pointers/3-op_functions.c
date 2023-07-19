#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add -Returns the sum of  addition of two intergers
 * @a: first numper  interger
 * @b: second numper  interger
 * Return: sum numper  of intergers
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub -Returns the sum of   subtracting  two intergers
 * @a: first numper  interger
 * @b: second numper  interger
 * Return: product numper  of operation
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_div -division  two intergers
 * @a: first numper  interger
 * @b: second numper  interger
 * Return: product numper  of operation
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
 * op_mul -Returns the sum of  multiplying  two intergers
 * @a: first numper interger
 * @b: second numper  interger
 * Return: product numper  of operation
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_mod -Returns the sum of remainderof the division of two intergers
 * @a: first interger
 * @b: second interger
 * Return: product of operation
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
