#include "main.h"
/**
  * _sqrt_recursion - function to find sqrt
  * @n: parameter
  * Return: retrun actual sqrt
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
  * actual_sqrt_recursion - function to find sqrt
  * @n: parameter 1
  * @i: parameter 2
  * Return: return sqrt
  */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
