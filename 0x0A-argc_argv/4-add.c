#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description:
 *   This program adds positive numbers provided as command-line arguments and
 *   prints the result. It handles invalid input and prints an error message
 *   when non-positive numbers or non-digit characters are encountered.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
