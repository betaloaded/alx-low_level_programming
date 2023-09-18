#include <stdio.h>
#include "main.h"
/**
 * atoi - program to change string to char
 * @s: string
 * Return: 0
 */
int atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
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

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		 z = atoi(argv[1]);
		 j = atoi(argv[2]);
		 printf("%d\n", z * j);
	}
	return (0);
}
