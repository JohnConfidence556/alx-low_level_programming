#include <stdio.h>

/**
 * main - prints a hexadecimal sting
 *
 * Return: Always return(0)
 */

int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
