#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
