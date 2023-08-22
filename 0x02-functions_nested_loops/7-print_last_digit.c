#include "main.h"
/**
  * main - Entry
  *
  * Return: 0
  */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0 )
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
