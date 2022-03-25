#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.* @str: pointer to string.
 *
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97  && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
