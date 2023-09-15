#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers -function that prints numbers
  * @separator: pointer parmaeter holding char
  * @n: parameter holding numbers
  */
void print_numbers(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (separator == NULL)
		{
			return;
		}
		else
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ar);
}
