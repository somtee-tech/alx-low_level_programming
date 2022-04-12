#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\ni", __FILE__);

	return (0);
}
