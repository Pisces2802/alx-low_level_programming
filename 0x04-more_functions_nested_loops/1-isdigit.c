#include "main.h"
/**
*_isdigit - check if character is a digit
*
*@c: parameter
*
*Return: either 1 for character that is digit or 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);

}
