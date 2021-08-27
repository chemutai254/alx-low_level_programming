#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: 0 on success
 */

int main(void)
{
int i;

i = 48;

while (i < 58)
	{
putchar(i);
i++;
}

putchar(10);

return (0);
}
