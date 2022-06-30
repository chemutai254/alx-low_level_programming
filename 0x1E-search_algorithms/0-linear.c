#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element
 * @size: the number of elements in an array
 * @value: value to search for
 *
 * Return: first index of value or -1 if the array does not exist
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Checked value[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
