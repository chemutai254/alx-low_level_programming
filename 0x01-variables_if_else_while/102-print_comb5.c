#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers
 *
 * Description - prints all possible combinations of two-digit numbers
 *
 * Return - 0 on successful execution
 */
int main(void)
{
int i, j;
int arr[2]
for (i = 0; i < 20; i++)
{
for (j = 0; j < 20; j++)
{
if (i != j && j != i)
{
printf("[%d %d]\n", arr[i], arr[j]);
}
}
}
putchar(10);
return (0);
}
