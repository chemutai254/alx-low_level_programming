#include <stdio.h>

/**
 * main - print combinations of two digits
 *
 * Description: print all possible combination of two digits
 *
 * Return: 0 on success
 */

int main(void)
{
int i, j;

i = 48;
j = 48;

while (i < 48)
{
j = i + 1;
while (j < 48)
{
putchar(i);
putchar(j);

if (i < 56 || j < 57)
{
putchar(44);
putchar(32);
}
j++;
}

i++;
}

putchar(10);

return (0);
}
