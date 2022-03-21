#include "main.h"
/**
* swap_int -a function that swaps the values of two integers
* @a: a pointer
* @b: a pointer
* Return: (0)
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
