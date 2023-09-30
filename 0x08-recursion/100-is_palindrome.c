#include "main.h"
/**
  * is_palindrome - function to print palindrome
  * @s: parameter
  * Return: palindrome
  *
  *
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pali(s, 0, _strlen_recursion(s)));
}
/**
  * _strlen_recursion - function to return length
  * @s: parmetr
  * Return: length
  *
  *
  *
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
  * check_pali - check if number is palidrome
  * @s: parameter
  * @i: parameter
  * @length: parameter
  * Return: check palindrome
  *
  */
int check_pali(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pali(s, i + 1, length - 1));
}
