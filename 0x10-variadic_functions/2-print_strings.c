#include "variadic_functions.h"
/**
  * print_strings - function to print string
  * @separator: ,
  * @n: number of int
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(arg, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
