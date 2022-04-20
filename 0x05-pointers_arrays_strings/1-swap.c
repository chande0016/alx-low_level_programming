#include "main.h"

/**
 * swap_int - function for swap integer
 * @a: A pointer
 * @b: B pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
