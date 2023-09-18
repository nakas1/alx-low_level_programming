#include "main.h"

int _find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The natural square root of the number.
 * If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_find_sqrt(n, 1));
}

/**
 * _find_sqrt - Helper function to find the square root using binary search
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number or -1 if not found.
 */
int _find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_find_sqrt(n, guess + 1));
}
