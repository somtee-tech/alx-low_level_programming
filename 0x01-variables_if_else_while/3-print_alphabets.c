#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int i;
	int c;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
