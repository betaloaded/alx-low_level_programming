#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry
*
* Return: Always 0
*/
int main(void)
{
	int x;
	int j;
	
	for (x = 0; x <= 9; x++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (x != j){
				putchar(x + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
			
		}
	}
	putchar('\n');
	return (0);
}
