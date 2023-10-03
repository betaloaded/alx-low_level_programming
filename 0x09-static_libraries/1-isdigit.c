#include "main.h"
/**
  * _isdigit - return 1 or 0
  *
  * @c: parameter
  *
  * Description: return 1 or 0
  *
  * Return: 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
