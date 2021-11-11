#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @j: char to print
 */
void print_char(va_list j)
{
	printf("%c", va_arg(j, int));
}

/**
 * print_int - prints an int
 * @j: int to print
 */
void print_int(va_list j)
{
	printf("%d", va_arg(j, int));
}

/**
 * print_float - prints a float
 * @j: float to print
 */
void print_float(va_list j)
{
	printf("%f", va_arg(j, double));
}

/**
 * print_string - prints a char
 * @i: string to print
 */
void print_string(va_list i)
{
	char *current;

	current = va_arg(i, char *);
	if (current == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", current);
}

/**
 * print_all - prints all args passed to function
 * @format: list of args to give data types.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	const char *copy;
	formatter formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int x, y;
	char *sep;

	sep = "";
	x = y = 0;
	copy = format;
	va_start(list, format);
	while (copy && copy[y] != '\0')
	{
		x = 0;
		while (formats[x].flag)
		{
			if (formats[x].flag[0] == copy[y])
			{
				printf("%s", sep);
				(formats[x].f)(list);
				sep = ", ";
			}
			x++;
		}
		y++;
	}
	printf("\n");
	va_end(list);
}
