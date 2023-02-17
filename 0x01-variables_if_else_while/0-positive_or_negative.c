#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* header site */

/**
 * main - main block
 *
 * Return: Always 0 (succss)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);

}
