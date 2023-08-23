#include "main.h"
#include <stdio.h>

void print_times_table(int n)
{
	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column--)
		{
			product = row * column;
			if (column == 0)
			{
				printf("%d", product);
			}
			else if (n > 15 || n < 0)
			{
				printf(" ");
			}
			else
			{
				printf("%2d", product);
				if (column != n)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
