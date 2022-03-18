#include <stdio.h>

/**
 * main - Prints the numbers from 1-100
 * for multiples of three, print Fizz
 * for multiples of five, print Buzz
 * for both multiples of three and five print FizzBuzz
 * Return: 0 always success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
