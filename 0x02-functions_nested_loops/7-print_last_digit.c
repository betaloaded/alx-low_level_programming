#include "main.h"
/**
  * print_last_digit - Returns the value of the last digit
  *
  * @i: value
  *
  * Description: function that prints the last digit of a number
  *
  * Return: 0
  */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
	return (0);
}
