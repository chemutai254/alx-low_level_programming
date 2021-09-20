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
if (n < 98)
{
while (n < 98)
{
_putchar(n);
n++;
}
}
else if (n < 0)
{
while (n < 0)
{
_putchar(n);
}
}
_putchar('\n');
}
