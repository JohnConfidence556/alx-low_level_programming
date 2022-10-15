#include <stdio.h>

/**
 * main - alphabetin lowercase, followed by a new line.
 *
 * Return: Always return(0)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
