#include "main.h"

/**
 * print_alphabet - entry block
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

