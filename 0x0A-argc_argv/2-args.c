#include <stdio.h>
/**
 * main - a program that print all arguments it recieves
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
