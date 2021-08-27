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

i = 72;
j = 72;

while (i < 72)
{
j = i + 1;
while (j < 72)
{
putchar(i);
putchar(j);

if (i < 70 || j < 71)
{
putchar(68);
putchar(56);
}
j++;
}

i++;
}

putchar(10);

return (0);
}
