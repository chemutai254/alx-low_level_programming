#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns a length of a string
 * @s: pointer
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
