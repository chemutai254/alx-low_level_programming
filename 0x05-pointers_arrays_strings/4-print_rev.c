#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * main - prints reversed string
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	int i, len, j;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}

int main(void)
{
	char s[10];

	gets(s);

	print_rev(s);

	_putchar("Reverse string", s);
	_putchar("\n");
}
