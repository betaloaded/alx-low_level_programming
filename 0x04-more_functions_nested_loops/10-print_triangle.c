#include <stdio.h>
#include "main.h"
/**
  * print_triangle - function to print a traingle using #
  *
  * @size: parameter
  *
  * Description: function that prints a triangle, followed by a new line
  *
  * Return: 0
  */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				putchar(32);
			}
			for (z = 0; z <= i; z++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
