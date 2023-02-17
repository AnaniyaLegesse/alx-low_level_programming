#include <stdio.h>

/**
 * main - main block
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first < 10; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
