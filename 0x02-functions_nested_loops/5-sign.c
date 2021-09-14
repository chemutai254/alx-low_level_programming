#include "main.h"

/**
 * print_sign - prints the sign of a number
 *@n: n is a sign
 *
 * Return: 1 if n is greater than zero
 */

int print_sign(int n)
{
if (n > 0)
{
return ('+');
}
else if (n < 0)
{
return ('-');
}
else
{
return (0);
}
}
