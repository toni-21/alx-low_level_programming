#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * num_checker - checks if the given char is a number or not
 * @a: char to be checked
 * Return: 1, if it is a number, 0 if else
 */

int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < 0)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
