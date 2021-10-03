#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * main() - prints reversed string
 * str_len - prints the length
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i)
	{
		_putchar(s[i - 1]);
		i--;
	}

	_putchar('\n');
}
