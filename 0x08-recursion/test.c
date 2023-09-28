#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool is_palindrome(char s[]);
int main(void){
	char s1[] = "hello world";
	char s2[] = "hi";	
	if (is_palindrome(s1))
		printf("%s\n is pal", s1);
	else
		printf("%s\n not pal", s1);
	return (0);
}
bool is_palindrome(char s[])
{
	int i;
	//find length
	int len = strlen(s);
	int middle = len / 2;
	//iterate
	for (i = 0; i < middle; i++)
		//check if pali
		if (s[i] != s[len - i - 1])
			return false;
	return true;
}
