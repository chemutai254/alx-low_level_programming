#include "main.h"
#include <stdio.h>

/**
 * print_natural - prints natural numbers
 *
 * Description: prints natural numbers
 *
 * Return: void
 */

int print_natural(void)
{
int n, sum;

for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum = sum + n
}
}
_putchar(sum);
_putchar('\n');
return (0);
}
