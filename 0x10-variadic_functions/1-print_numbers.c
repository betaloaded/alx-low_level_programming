#include "variadic_functions.h"
/**
  * print_numbers - prints numbers
  * @separator: seperator
  * @n: number of int
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(arg, int));
		}
	printf("\n");
	va_end(arg);
}
