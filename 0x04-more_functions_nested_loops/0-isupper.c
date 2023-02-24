#include "main.h"
/**
*_isupper - check if letter is uppercase
*@c: The parameter
*Return: 1 for uppercase 0 lowercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
