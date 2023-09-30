#include "main.h"
/**
  * _print_rev_recursion - function to print reverse of a string
  * @s: parameter holding character string
  *
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}
