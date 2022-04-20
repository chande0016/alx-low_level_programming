#include "main.h"
/**
 * _puts - function print string
 * @str: a pointer
 *
 * Return: void
 */

void _puts(char *str)
{
char *c;
int j;

c = str;

for (j = 0; c[j]; j++)
{
_putcha (c[j]);
}
_putchar('\n');
}
