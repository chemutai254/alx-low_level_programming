#include "main.h"

/**
 *main - prints holberton
 *Description - prints holberton
 *Return: 0 on success
 */

int main(void)
{
char *c = "holberton";
int i;  
for (i = 0; i < 10; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
