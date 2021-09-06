#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	print_rev(strrev(s));
	printf('\n');
}
