#include "main.h"
/**
  * _islower -  checks for lowercase character
  *
  * @c: parameter holds character
  *
  * Description:  function that checks for lowercase character
  *
  * Return always 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
