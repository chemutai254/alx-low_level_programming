#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: integer parameter
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j = 0;
	int z;

	if (size > 0)
	{
		while (j < size)
		{
			z = size - j - 1;
			while (i < size)
			{
				if (z > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				i++;
			}
			j++;
			i = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
