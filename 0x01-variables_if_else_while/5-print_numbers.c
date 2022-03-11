#include <stdio.h>

/**
 * main - Prints all the integer numbers from 0-9
 * Return: 0 on success
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%i", number);
		putchar('\n');
	return(0);
}
