#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int r;

	for (r = 'z'; r >= 'a'; --r)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
