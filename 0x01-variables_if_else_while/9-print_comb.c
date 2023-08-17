#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
