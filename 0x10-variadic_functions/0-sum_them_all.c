#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @x: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If x == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int x, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, x);

	for (index = 0; index < x; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
