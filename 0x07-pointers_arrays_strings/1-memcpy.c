#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: dest memory
 * @src: source mamory
 * @n: bytes from memory
 * Return: memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

a = 0;
while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
