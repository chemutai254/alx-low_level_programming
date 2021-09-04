#include "main.h"

/**
 *print_alphabet - prints alphabet in lower cases
*return - void
 */
void print_alphabet(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
printf("%c ", n);
_putchar(n);
}
_putchar('\n');
}
