#include "main.h"
#include <stdio.h>
/**
  * times_table - prints the 9 times table
  *
  * Description: function that prints the 9 times table
  *
  * Return: 0
  */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (column == 0)
			{
				printf("%d, ", product);
			}
			else
			{
				printf("%2d", product);
				if (column != 9)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
