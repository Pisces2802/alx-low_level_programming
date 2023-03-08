#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: String param
 * Return: The length of string
 */

int _strlen_recursion(char *s)
{
	if (*s  == '\0')

		return (0);
	s++;
	return (1 + _strlen_recursion(s));

}
