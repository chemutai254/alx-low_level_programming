#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @a: the last digit
 *
 * Return: value of last digit
 */

int print_last_digit(int a)
{
int num = a % 10;

if (a < 0)
{
num = num * -1;
}
_putchar(num + '0');
return (num);
}
