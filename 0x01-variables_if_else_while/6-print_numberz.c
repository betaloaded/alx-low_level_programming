#include <stdio.h>
#include <stdlib.h>
/**
* main - Enter point
*
* Return: always 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
