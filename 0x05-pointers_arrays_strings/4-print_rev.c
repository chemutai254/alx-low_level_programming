#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * main() - prints reversed string
 * str_len - prints the length
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	char *start, *end, temp;

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}

int main(void)
{
	char s[9] = 'Holberton';

	print_rev(s);
	return (0);
}

int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
		i++;
	return (i);
}

