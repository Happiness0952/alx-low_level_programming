#include <stdio.h>

/**
 * factorial - factorial of a given number
 * @n: variable
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
