#include "main.h"
/**
  * string_nconcat - function to concatenate two string
  * @s1: contains string
  * @s2: contians string
  * @n: size
  * Return: alloc
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alloc;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	alloc = malloc(sizeof(char) * (s1len + n) + 1);
	if (alloc == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			alloc[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			alloc[s1len + i] = s2[i];
		alloc[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			alloc[i] = s1[i];
		for (i = 0; i < n; i++)
			alloc[s1len + i] = s2[i];
		alloc[s1len + i] = '\0';
	}
	return (alloc);
}
