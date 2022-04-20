#include "main.h"

/**
 * _strlen - length of strings
 * @s: a pointer string
 *
 * Return: void
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
