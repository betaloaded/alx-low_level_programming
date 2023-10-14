#include "function_pointers.h"
/**
  * print_name - function to print a name
  * @name: parm holding name
  * @f: a pointer to print name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
