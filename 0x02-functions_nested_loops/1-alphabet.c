#include "main.h"
#include <stdio.h>

/**
 *print_alphabet - prints alphabet in lower cases
 *Return: void
 */
void print_alphabet(void)
{
char n = 'a';
while (n <= 'z')
{
_putchar(n);
n++;
}
_putchar('\n');
}
