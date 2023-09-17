#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: check for the null terminator */
	{
		_putchar('\n'); /* Print a new line when the string ends */
		return;
	}
	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* puts recursion with the next character */
}
