#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return:0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
