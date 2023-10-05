#include <stdio.h>
int _atoi(char *str);
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

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
/**
  * _atoi - converts a string to an integer
  * @str: contains str
  * Return: 0
  */
int _atoi(char *str)
{
	int i = 0;
	int res = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		res = res * 10 + (str[i] - '0');
	}
	return (res);
}
