#include "main.h"
#include <stdio.h>

/**
 * print_array - Fuction that print an array
 *@a: A pointer
 *@n: return value n
 *Return: void
 */

void print_array(int *a, int n)
{
int j;

j = 0;
while (j < n)
{
printf("%d", a[j]);

if (j < n - 1)
{
printf(", ");
}

j++;

}

printf("\n");
}
