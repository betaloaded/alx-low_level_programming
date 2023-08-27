#include <stdio.h>
#include "main.h"

/**
  * print_square - print square
  *
  * @size: paramenter
  *
  * Description:function that prints a square, followed by a new line
  * Return: Always 0.
  */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
