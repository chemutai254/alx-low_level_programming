#include "main.h"

/**
 *main - prints alphabet in lower cases
 *Description: prints alphabet in lower case
*Returns - 0 on success 
 */
int print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
_putchar('\n');
print_alphabet();
return (0);
}
