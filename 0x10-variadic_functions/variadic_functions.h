#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: zaaak
 * Desc: Header file containing prototypes to functions
 *       for 0x0F-variadic_functions directory.
 */

#include <stdarg.h>

/**
 * struct printer -  a printer struct type defining .
 * @symbol: A symbol  a data type representing.
 * @print:  pointer to a function that prints corresponding
 *    a data type  to symbol.
 */
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
