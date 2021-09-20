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
int col, product;

for (n = 0; n <= 15; n++)
{
for (col = 0; col <= 15; col++)
{
product = n * col;

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
}
_putchar('\n');
}
}
