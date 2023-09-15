#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - function to print anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	int count = 0;
	va_list list;

	va_start(list, format);
	if (format[count])
	{
		while (format[count])
		{
			switch (format[count])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					count++;
					continue;
			}
			sep = ", ";
			count++;
		}
	}
	printf("\n");
	va_end(list);
}
