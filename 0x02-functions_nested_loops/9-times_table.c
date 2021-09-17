#include "main.h"
#include <stdio.h>

/**
 * times_table - prints nine times table
 * Description:
 * Return: void
 */

void times_table(void)
{
int num, count;
num = 9;

tables(num);
for (count = 0; count <= 9; count++)
{
_putchar("%d * %d = %d ", num, count, num *count);
}
_putchar('\n');
}
