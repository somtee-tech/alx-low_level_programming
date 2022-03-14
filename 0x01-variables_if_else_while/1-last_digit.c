#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 always success
*/

int main(void)

{

		int n;
		int t;

		srand(time(0));

		n = rand() - RAND_MAX / 2;
		t = n % 10;

		/* your code goes there */
		if  (t > 5)
		{
			printf("Last digit of %d is ", n);
			printf("%d and is greater than 5\n", t);
		}
		else if (t == 0)
		{
			printf("Last digit of %d is ", n);
			printf("%d and is 0\n", t);
		}
		else if ((t < 6) && (!0))
		{
			printf("Last digit of %d is ", n);
			printf("%d and is less than 6 and not 0\n", t);
		}
		return (0);

}
