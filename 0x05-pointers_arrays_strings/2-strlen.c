#include "main.h"

/**
 * _strlen - finds and output the length of a string.
 *@s: pointer to string.
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	
	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
