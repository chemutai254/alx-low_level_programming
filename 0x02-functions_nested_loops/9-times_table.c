#include "main.h"
#include <stdio.h>

/**
 * times_table - prints nine times table
 * Description:
 * Return: void
 */

void times_table(void)
{
int num, count, product, tens, ones;

for (num = 0; num <= 9; num++)
{
for (count = 0; count <= 9; count++)
{
product = num * count;
tens = product / 10;
ones = product % 10;

if (count == 0)
{
_putchar('0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(ones + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
