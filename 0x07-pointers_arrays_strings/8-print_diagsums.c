#include "main.h"
#include <stdio.h>

/**
 * print_diagrsums - print sum
 * @a: matrix
 * @size: size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i, total1 = 0, total2 = 0;

i = 0;
while (i < size)
{
total1 += a[(size + 1) * i];
total2 += a[(size - 1) * (i + 1)];

i++;
}

printf("%d, %d\n", total1, total2);

}
