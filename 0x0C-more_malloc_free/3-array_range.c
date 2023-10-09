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
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	alloc = malloc(sizeof(int) * size);
	if (alloc == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		alloc[i] = min++;
	return (alloc);
}
