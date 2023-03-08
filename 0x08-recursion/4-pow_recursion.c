#include "main.h"

/**
 * _pow_recursion - retturns value of x raise to y
 *
 * @x: the number to be raised
 * @y: the power
 * Return: The value of x raised to the value of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
