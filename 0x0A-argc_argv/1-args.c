#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: count the argument
 * @agrv: points to the array of strings
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	/* to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
