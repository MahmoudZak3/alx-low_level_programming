#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - numbers printed.
 * @separator: string  print  numbers.
 * @n: integers passed to the function The number of .
 * @...:  variable  of numbers to be printe.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int figure;

va_start(nums, n);

for (figure = 0; figure < n; figure++)
{
printf("%d", va_arg(nums, int));

if (figure != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(nums);
}
