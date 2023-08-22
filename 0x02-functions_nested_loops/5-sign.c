#include "main.h"
/**
  * print_sign - prints a sign
  *
  * @n: variable
  *
  * Description: Returns 1 and prints + if n is greater than 0
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
