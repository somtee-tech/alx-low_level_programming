#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: 0 (on success).
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("Anything; %i\n", num);
	return (0);
}
