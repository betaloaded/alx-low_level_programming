#include <stdio.h>
#include "main.h"
/**
  * more_numbers - function to print 14 no on 10 lines
  *
  * Description:  function that prints 10 times the numbers, from 0 to 14
  *
  * Return: always 0
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
