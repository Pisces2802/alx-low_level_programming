#include <stdio.h>

/**
*_strlen - Returns the length of a string.
*@str: parameter
*Return: Length
*/

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
