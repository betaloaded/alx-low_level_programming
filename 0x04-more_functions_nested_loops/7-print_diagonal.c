#include "main.h"
/**
  * print_diagonal - function to print diagonal line
  *
  * @n: parameter
  *
  * Description: function that draws a diagonal line on the terminal
  *
  * Return: 0
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
