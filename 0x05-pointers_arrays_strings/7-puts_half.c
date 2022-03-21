#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints half of a string.
 *@str: value to be evaluate.
 *Return: (0).
 */
void puts_half(char *str)
{
	int len = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	if (len % 2 == 0)
	{
		z = len / 2;
	}
	else
	{
		z = (len + 1) / 2;
	}
	for (z = 0; z < len ; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
