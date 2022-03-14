#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int a;
	int l;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
