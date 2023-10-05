#include <stdio.h>
/**
  * main - function to print number of arg
  * @argc: arg counter
  * @argv: arg vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
