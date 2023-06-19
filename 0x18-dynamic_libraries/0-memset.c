#include "main.h"
#include <stddef.h>
/**
 * *_memset - Fills the first n bytes of the memoryarea
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area @s.
 */

void *_memset(void *s, int c , unsigned n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
