#include "main.h"
/**
 * _memset - fill memory
 * @s: memory
 * @b: costant bytes
 * @n: bytes of memory
 * Return: The memory
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

a = 0;
while (a < n)
{
s[a] = b;
a++;
}

return (s);
}
