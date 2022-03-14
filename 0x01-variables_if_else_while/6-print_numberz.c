#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int t;

	for (t = 0; t < 10; t++)
	{
		putchar(t + '0');
	}

	putchar('\n');
	return (0);
}
