#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - prints strings
  * @separator: parameter
  * @n: parameter
  * @...: A variable number of strings to be printed
  * Description: If separator is NULL, it is not printed.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	char *str;
	unsigned int i;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ar, char *);

		if (str  == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ar);
}
