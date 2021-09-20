#include "main.h"

/**
 * print_times_table - prints n times table
 *
 * @n: integer
 *
 * Return: void
 */

void print_times_table(int n)
{
int row, col, product;

if (n >= 0 && n < 15)
{
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
product = row * col;

if (col == 0)
{
_putchar('0');
}
else if (product <= 15)
{
_putchar(',');
_putchar(' ');
_putchar(product % 10 + '0');
}
else if (product > 15 && product < 100)
{
_putchar(',');
_putchar(' ');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
else if (product > 99 && product < 1000)
{
_putchar(',');
_putchar(' ');
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
_putchar('\n');
}
}
}
}
