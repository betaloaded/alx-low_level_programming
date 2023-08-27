#include <stdio.h>
#include "main.h"
/**
  * _isupper - fuction to check uppercase
  *
  * @c: parameter
  *
  * Description: checks for upper case letters
  *
  * Return: Always 0
  */
int _isupper(int c)
{
	if (c == 'A' || c == 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
