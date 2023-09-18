#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description:
 *   This program prints all the command-line arguments, including the program
 *   name, one argument per line.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
