#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet in lowercase 10 times
 *Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
char n = 'a';
while (i < 10)
{
n = 'a';
while (n <= 'z')
{
_putchar(n);
n++;
}
_putchar('\n');
i++;
}
}
