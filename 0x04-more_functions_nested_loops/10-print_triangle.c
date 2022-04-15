#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: print size
 * Return; Always 0
 */

void print_triangle(int size)
{


int i;
int z;
int d;
int e;

if (size > 0)
{
d = size - 1;
for (i = 0; i < size; i++)
{
for (z = d= d; z > 0 ; z--)
{
_putchar (' ');
}

for (e = 0; e <= i; e++)
{
_putchar (35);
}

i--;

_putchar ('\n');

}

}
else
{
_putchar ('\n');
}
}
