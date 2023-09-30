#include "main.h"
/**
  * factorial - function to return factorial
  * @n: parameter holding number
  * Return: -1 if n < 0, return 1 if = 0, retrun factorial of number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
