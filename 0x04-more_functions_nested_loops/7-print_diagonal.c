#include "main.h"
#include <stdio.h>
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
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
