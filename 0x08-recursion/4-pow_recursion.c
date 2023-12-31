#include "main.h"
/**
  * _pow_recursion - function to return power
  * @x: parameter 1
  * @y: parameter 2
  * Return: retrun power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
