#include "main.h"
/**
  * _strlen - function that returns the length of a string
  * @s: parameter holding value
  * Description: this function returns the length of a string
  * Return: length
  */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
