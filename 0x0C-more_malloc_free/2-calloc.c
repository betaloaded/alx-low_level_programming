#include "main.h"
/**
  * _calloc - allocates memory for an array
  * @nmemb: number of members
  * @size: size of nmemb
  * Return: alloc
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = calloc(nmemb, size);
	
	if (alloc == NULL)
		return (NULL);
	else
		return (alloc);
}
