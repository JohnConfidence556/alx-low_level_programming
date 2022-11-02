#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * on error, -1 is returned and error is set appropriately.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1)
		_putchar(*s);
	}
}
