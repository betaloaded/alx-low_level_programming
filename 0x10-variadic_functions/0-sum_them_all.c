#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - function that retruns the sum of all param
  * @n: parameter holding numbers
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list ar;

	va_start(ar, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ar, unsigned int);
	}
	va_end(ar);
	return (sum);
}
