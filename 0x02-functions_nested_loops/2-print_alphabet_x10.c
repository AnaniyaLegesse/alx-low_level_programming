#include "main.h"

/**
 * print_alphabet_x10 - entry block
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

