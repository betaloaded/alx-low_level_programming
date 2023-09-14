#include <stdio.h>
#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: parameter
  * @size: parameter
  * @cmp: parameter
  * Return: index or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
