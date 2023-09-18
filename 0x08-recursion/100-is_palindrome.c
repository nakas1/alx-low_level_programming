#include "main.h"
#include <stdio.h>
#include <string.h>

int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome
 * @s: The string to be checked
 * @start: The starting index of the string
 * @end: The ending index of the string
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
