#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: the number
 * Return: 1, -1, or factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}


TASK 4

#include "main.h"
/**
 * _pow_recursion - returns x to the y
 * @x: one num
 * @y: the exponent
 * Return: x to the y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	else
		return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
