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

i = 90;

while (i < 100)
	{
putchar(i);
i++;
}

putchar(10);

return (0);
}
