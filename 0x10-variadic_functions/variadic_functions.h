#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - Data type of a format.
 * @op: Format
 * @f: Function.
 *
 * Return: Always 0
 */

typedef struct format
{
	char *op;
	void (*f)(va_list all);
} f;

#endif /* VARIADIC_FUNCTIONS_H */#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - Data type of a format.
 * @op: Format
 * @f: Function.
 *
 * Return: Always 0
 */

typedef struct format
{
	char *op;
	void (*f)(va_list all);
} f;

#endif /* VARIADIC_FUNCTIONS_H */
