#include "main.h"

/**
 * more_numbers - prints 10 times the number (0 - 14)
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar(i + '0');
}
