#incude "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: checked for uppercase
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
