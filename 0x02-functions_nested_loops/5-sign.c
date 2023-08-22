#include "main.h"
/**
  * main - entry
  *
  * Return: return 1 0r 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
