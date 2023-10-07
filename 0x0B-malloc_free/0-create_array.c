#include "main.h"
/**
  * create_array - function to create array of char
  * @size: parameter holding size
  * @c: holding chars
  * Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
