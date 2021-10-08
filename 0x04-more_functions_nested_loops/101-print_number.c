#include "main.h"

/**
 * power - exponents
 * @base: base 10
 * @exp: exponential digit
 * Return: integer
 */

int power(int base, int exp)
{
        int i, num;

        num = 1;
        for (i = 0; i < exp; i++)
                num *= base;
        return (num);
}  

/**
 * print_number - prints an integer
 *
 * @n: integer patameter
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	temp = n;
	if ((temp / 10) > 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}
