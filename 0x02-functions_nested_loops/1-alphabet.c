#include "main.h"

/**
 *print_alphabet - prints alphabet in lower cases
*return - void
 */
void print_alphabet(void)
{
char n = 'a';
while (n <= 'z')
{
printf("%c ", n);
n++;
_putchar(n);
}
_putchar('\n');
}
