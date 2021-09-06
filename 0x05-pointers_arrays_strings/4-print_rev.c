#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	char s[100] = {0}, a = 0;
	int i = 0, len = 0;

	while (s[len++] != '\0')
	len--;

	while (i < len)
	{
		a = s[i];
		s[i] = s[len];
		s[len] = a;
		i++;
		len--;
	}
	print_rev(s);
	_putchar('\n');
}
