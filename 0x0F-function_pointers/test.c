#include <stdio.h>
/**
  *
  *
  *
  *
  *
  */
int sum(int, int);
int mul(int, int);
int sub(int, int);
int output(int(*ptr)(int, int));
int main(void)
{
	int i;
	int ch;

	int (*ptr[])(int, int) = {sub, mul, sum};
	printf("Enter number 0 to subtract, 1 to multiply, 2 to sum\n");
	scanf("%d", &ch);
	i = output(*ptr[ch]);
	printf("%d\n", i);
}
int sum(int a, int b)
{
	return (a + b);
}
int mul(int a, int b)
{
	return (a * b);
}
int sub (int a, int b)
{
	return (a - b);
}
int output(int(*ptr)(int, int))
{
	ptr(5, 6);
}
