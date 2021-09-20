#include "main.h"
#include <stdio.h>

/**
 * main - prints natural numbers
 *
 * Description: prints natural numbers
 *
 * Return: void
 */

int main(void)
{
int n, sum;

sum = 0;

for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum = sum + n;
}
}
_putchar(sum);
_putchar('\n');
return (0);
}
