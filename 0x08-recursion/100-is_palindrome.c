#include "main.h"
#include <string.h>
/**
   * is_palindrome - checks if a string is a palindrome
    * @s: string to reverse
     * Return: 1 if it is, 0 if it not
      */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pali(s, 0, _strilen_recursion(s)));
}

/**
   * _strilen_recursion - returns the length of a string
    * @s: string to calculate the length of
     * Return: length of the string
      */
int _strilen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strilen_recursion(s + 1));
}

/**
  * check_pali - checks the characters recursively for palindrome
  * @s: string to check
  * @i: iterator
  * @length: length of the string
  * Return: 1 if palindrome, 0 if not
  */
int check_pali(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pali(s, i + 1, length - 1));
}
