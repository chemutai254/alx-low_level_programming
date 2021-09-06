#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		print_rev(s[a]);
		a++;
	}
	putchar('\n');
}
