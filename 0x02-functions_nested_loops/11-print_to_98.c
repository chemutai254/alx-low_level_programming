#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints prime numbers
 *
 * @n: integer
 *
 * Return: integer
 */

void print_to_98(int n)
{
int a;

for (a = 1; a <= n / 2; a++)
{
if (n % a != 0)
{
_putchar(n);
}
_putchar('\n');
}
}
