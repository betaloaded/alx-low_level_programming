#include "main.h"
/**
  * alloc_grid - function to return pointer to 2 dimen arr of int
  * @width: parameter holding width of array grid
  * @height: parameter holding height of array grid
  * Return: output
  */
int **alloc_grid(int width, int height)
{
	int **output;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			free(output[i]);
			for (j = 0; j <= height; j++)
			{
				free(output[j]);
			}
		}
		for (j = 0; j < width; j++)
		{
			output[i][j] = 0;
		}
	}
	return (output);
}
