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
printf(n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf(n);
n--;
}
}
printf('98\n');
}
