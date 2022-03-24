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
	/* j is a counter for  n bytes of src to be concatenated */
	/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
