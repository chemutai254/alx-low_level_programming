#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *@a: prints an absolute value
 * Return: an integer
 */

int _abs(int a)
{
if (a < 0)
{
return (-a);
}
else if (a > 0)
{
return (+a);
}
else
{
return (a);
}
}
