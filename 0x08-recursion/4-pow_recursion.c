#include "main.h"
/**
 * _pow_recursion - _print a variable that has power
 * @x: variable
 * @y: varialbe
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0 || x == 1 || y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
