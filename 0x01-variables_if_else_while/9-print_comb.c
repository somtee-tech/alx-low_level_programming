#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
