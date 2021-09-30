#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: iinteger parameter
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
