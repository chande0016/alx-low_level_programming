#include "main.h"

/**
 * puts_half - function for print character
 * @str: A poiter
 *
 * Return: void
 */

void puts_half(char *str)
{
int j, last;

i = 0;
while(str[i] != '\0')
{
i++;
}

last = (i - 1) / 2;

for (i = last ; str[i] ; i++)
{
_putchar (str[i]);
}

_putchar ('\n');

}
