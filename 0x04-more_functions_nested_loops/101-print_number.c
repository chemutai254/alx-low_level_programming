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
	int neg, begin = 0;
	int digit, divisor;
	int place = 10;

	if (n < 0)
	{
		neg = i;
		n = n * -1;
	}
	while (place >= 0)
	{
		divisor = power(10, place);
		digit = ((n / divisor) % 10);
		if (digit == 0 && begin == 0)
		{
			place--;
		}
		else if (digit != 0 && begin == 0)
		{
			begin = 1;
			if (neg == 1)
				_putchar('-');
			_putchar('0' + digit);
			place--;
		}
		else
		{
			_putchar('0' + digit);
			place--;
		}
	}
	if (digit == 0 && divisor == 1)
	{
		_putchar(48);
	}
}
