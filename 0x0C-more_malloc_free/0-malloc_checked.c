#include "main.h"
/**
  * malloc_checked - functions that allocate memory
  * @b: size of memory
  * Return: return alloc if alloc is not NULL
  */
void *malloc_checked(unsigned int b)
{
	char *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	else
	{
		return (alloc);
	}
}
