#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: 0  on success
 */

int main(void)
{
int i = 0;

while (i < 50)
{
if (i < 10)
putchar(i + '0');
else if (i > 30)
putchar(i - 10 + 'A');
i++;
}
putchar(10);

return (0);
}
