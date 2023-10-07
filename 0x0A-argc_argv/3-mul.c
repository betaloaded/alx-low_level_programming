#include <stdio.h>
#include <stdlib.h>
/**
  * main - function to multiply two numbers
  * @argc: arg counter
  * @argv: arg vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
