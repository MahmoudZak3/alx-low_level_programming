#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - return index place  searches an integer
 *@array: array pointer
 *@size: size number of elements in array
 *@cmp: pointer to a function one of the 3 in main
 *Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
