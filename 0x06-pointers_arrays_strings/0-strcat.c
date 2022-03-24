#include "main.h"
#include <string.h>

/**
 * *_strcat - used to concatenates two string
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	/* Store length of destination in the length variable*/
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	/* concatenate src to dest*/
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	/* terminating the dest string*/
	dest[length] = '\0';
	return (dest);
}
