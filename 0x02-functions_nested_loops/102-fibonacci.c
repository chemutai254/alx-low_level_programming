#include "main.h"
#include <stdio.h>

/**
 * _fibonacci - prints fibonacci series
 * @a: integer
 * Description: prints first 50 fibonacci numbers
 *
 * Return: 0
 */

void _fibonacci(int a)
{
int b = 1, c;

for (a = 0 ; a < 50; a++)
{
c = a + b;
_putchar(c);
a = b;
b = c;
_putchar('\n');
}
}
