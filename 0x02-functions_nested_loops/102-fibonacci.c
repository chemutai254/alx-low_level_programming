#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci series
 *
 * Description: prints first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
int a, b = 1, c;

for (a = 0 ; a < 50; a++)
{
c = a + b;
_putchar(c);
a = b;
b = c;
_putchar('\n');
return (0);
}
}
