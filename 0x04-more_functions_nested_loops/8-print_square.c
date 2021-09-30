#include "main.h"

/*
 * print_square - function that prints a square
 *
 * @size: integer parameter
 *
 * Return: 0
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			j = 0;
			i++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
