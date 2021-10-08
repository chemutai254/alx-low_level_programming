#include "main.h"
#include <stdio.h>

/**
 * _fibonacci - prints fibonacci series for the first 50 numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int j = 1;
	long int k = 1;
	long int sum;

	printf("%d", 1);
	for (i = 1; i <= 49; i++)
	{
		sum = j + k;
		printf(", %ld", sum);
		j = k;
		k = sum;
	}

	printf("\n");

	return (0);
}
