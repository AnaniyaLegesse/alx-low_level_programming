#include <stdio.h>

/**
 * main - main block
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'e' && c != 'q') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);

}
