#include "main.h"
/**
  * _isalpha - print 1 if c is a letter lower or upper
  *
  * @c: letter to be checked
  *
  * Description: Returns 1 if c is a letter, lowercase or uppercase
  *
  * Return: returns 1 else 0
  */
int _isalpha(int c)
{
	if (((c >= 97 && c <= 122) || (c >= 65 && c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
