#include <stdio.h>
/**
 * main - A program that prints size of various types
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %zu byte\n", sizeof(a));
printf("size of int: %zu bytes\n", sizeof(b));
printf("size of long int: %zu bytes\n", sizeof(c));
printf("size of long long int: %zu bytes\n", sizeof(d));
printf("size of float: %zu bytes\n", sizeof(f));

return 0;
}
