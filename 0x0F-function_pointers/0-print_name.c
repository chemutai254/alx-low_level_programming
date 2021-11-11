#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: The name to prints
  * @p: Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*p)(char *))
{
	if (name != NULL && p != NULL)
		p(name);
}
