#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins required for change
 * @cents: The amount in cents for which to make change
 *
 * Return: The minimum number of coins
 */
int minCoins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if cents >= 25
		{
			cents -= 25;
		} else if (cents >= 10)
		{
			cents -= 10;
		} else if (cents >= 5)
		{
			cents -= 5;
		} else if (cents >= 2)
		{
			cents -= 2;
		} else
		{
			cents -= 1;
		}
		coins++;
	}

	return (coins);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description:
 *   This program calculates and prints the minimum number of coins required to
 *   make change for an amount of money provided as a command-line argument.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	} else
	{
		int coins = minCoins(cents);

		printf("%d\n", coins);
	}

	return (0);
}
