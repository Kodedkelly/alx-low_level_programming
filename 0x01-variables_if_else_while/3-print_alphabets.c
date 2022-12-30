#include <stdio.h>
/**
 * main - A program that prints alphabets in lower cases and upp
 *
 * Return:0
 */
int main(void)
{
	int ch;

	for (ch = 'a', ch <= 'z', ch++)
		putchar(ch);

	for (ch = 'A', ch <= 'Z', ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
