#include <stdio.h>
#include "main.h"
/**
 * atoi - program to change string to char
 * @str: string
 * Return: 0
 */
int atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++)
	{
		res = res * 10 + str[i] - '0';
		return (res * sign);
	}
	return (0);
}
/**
  * main - program to multiply two numbers
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int z, j;

	if (argc == 3)
	{
		z = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", z * j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
