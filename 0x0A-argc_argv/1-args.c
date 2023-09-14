#include <stdio.h>
/**
  * main - program that prints the no of arg passed into it
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
