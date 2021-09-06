#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns a length of a string
 * @s: pointer
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		printf("Length of the string: %d", len);
	}
	return (0);
}
