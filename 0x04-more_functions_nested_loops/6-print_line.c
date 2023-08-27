#include <stdio.h>
#include "main.h"
/**
  * print_line - function to print line
  *
  * @n: parameter holding number of times line will print
  *
  * Description: function that draws a straight line in the terminal
  *
  * Return: 0
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}

