#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its paramters func .
 * @n: the function of param that will be passed to .
 * @...: variable of paramters to calc sum .
 * Return: Always 0 .
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;

va_start(nums, n);

for (index = 0; index < n; index++)
sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
