#include "main.h"
/**
*swap_int - Swaps the values of int a and int b.
*@a: first int.
*@b: second int.
*Return: 0 is success.
*/

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
