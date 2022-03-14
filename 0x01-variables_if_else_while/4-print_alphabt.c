#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int fig;

	for (fig = 'a'; fig <= 'z'; fig++)
	{
		if (fig != 'q' && fig != 'e')
			putchar(fig);
	}
	putchar('\n');
	return (0);
}
