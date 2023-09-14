#include <stdio.h>
/**
  * print_name - function to print name
  * @name: parammeter 1
  * @f: parameter 2
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
