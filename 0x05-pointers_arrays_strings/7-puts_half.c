#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: character parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j >= i / 2)
				_putchar(str[j]);
		}
	}
	else
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (j > i / 2)
				_putchar(str[j]);
		}
	}

	_putchar('\n');
}
