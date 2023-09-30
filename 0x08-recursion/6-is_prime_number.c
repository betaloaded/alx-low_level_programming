#include "main.h"
/**
  * is_prime_number - function to return prime no
  * @n: parameter
  * Return: prime number
  *
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime_number(n, n - 1));
}
/**
  * real_prime_number - return real prime numbr
  * @n: parameter
  * @m: parameter
  * Return: real prime numb
  */
int real_prime_number(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (real_prime_number(n, m - 1));
}
