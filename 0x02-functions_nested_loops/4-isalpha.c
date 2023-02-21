#include "main.h"
#include <ctype.h>
/**
 * _isalpha -code block
 * @c: char argument
 * Return: return 1 or 0 deoend on argument
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
