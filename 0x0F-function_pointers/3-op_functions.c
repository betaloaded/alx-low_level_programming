#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
  * op_add - function to sum
  * @a: parameter
  * @b: parameter
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - function to subtract
  * @a: parameter
  * @b: parameter
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - function to multiply
  * @a: parameter
  * @b: parameter
  * Return: mult of and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - function to divide
  * @a: parameter
  * @b: parameter
  * Return: division
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - fuction to return the modulus
  * @a: parameter
  * @b: parameter
  * Return: modulus
  */
int op_mod(int a, int b)
{
	return (a % b);
}
