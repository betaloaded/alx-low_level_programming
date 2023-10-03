#include "main.h"
/**
  * _puts_recursion - function to print string
  * @s: parameter storing s
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}