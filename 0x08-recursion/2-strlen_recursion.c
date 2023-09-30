#include "main.h"
/**
  * _strlen_recursion - function to print length of string
  * @s: parameter holding string
  * Return: retrun length of string
  */
int _strlen_recursion(char *s)
{
	int longstring = 0;

	if (*s)
	{
		longstring++;
		longstring = longstring + _strlen_recursion(s + 1);
	}
	return (longstring);
}
