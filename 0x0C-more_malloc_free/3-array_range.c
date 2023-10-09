#include "main.h"
/**
  * array_range - function that creates an array of integers
  * @min: minimum number
  * @max: number
  * Return: alloc
  */
int *array_range(int min, int max)
{
	int *alloc;
	int i;

	if (min > max)
		return (NULL);

	alloc = malloc(sizeof(int) * (max - min) + 1);
	if (alloc == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		alloc[i] = min++;
	return (alloc);
}
