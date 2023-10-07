#include "main.h"
/**
  * argstostr - function to concat all arg of prog
  * @ac: arg counter
  * @av: agr vector
  * Return: output
  */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *output;
	int count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	output = malloc(sizeof(char) * count + 1);

	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[k] = av[i][j];
			k++;
		}
		output[k++] = '\n';
	}
	output[k] = '\0';
	return (output);
}
