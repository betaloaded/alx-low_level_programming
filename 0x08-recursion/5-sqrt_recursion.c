#include "main.h"
/**
  * _sqrt_recursion - function to return sqrt
  * @n: parameter
  * Return: real_sqrt
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));
}
/**
  * real_sqrt - function to return real sqrt
  * @n: parametr 1
  * @m: parameter 2
  * Return: return real sqrt
  */
int real_sqrt(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (real_sqrt(n, m + 1));
}
