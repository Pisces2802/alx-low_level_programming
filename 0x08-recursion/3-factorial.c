#include "main.h"

/**
 * factorial - Returns factorial
 *
 * @n: number factorial
 * Return: n > 0 - return n || n <= 0 return 1
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
