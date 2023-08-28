#include <stdio.h>
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
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
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