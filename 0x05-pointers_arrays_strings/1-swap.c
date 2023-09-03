#include "main.h"
/**
  * swap_int - function to swap values of two integers
  * @a: parameter holding value a
  * @b: parameter holding value b
  * Description: Swaps values of a and b
  * Return: 0
  */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
