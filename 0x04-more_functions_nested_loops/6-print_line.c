#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: parameter integer
 *
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}

	_putchar('\n');
}
