#include "main.h"
/**
 * rev_string - prints the reverse string
 * @s: a pointer to an integer
 *
 * Return: void
 */

void rev_string(char *s)
{
char *start_c, *end_c, temp;
int i,count;
int length = 0;

for (i = 0; s[i] ; i++)
{
length++;
}

count = length;

start_c = s;
end_c = s;

for (i = 0; i < count - 1; i++)
{
end_c++;
}

for (i = 0; i < count / 2; i++)
{

temp = *end_c;
*end_c = *start_c;
*start_c = temp;

start_c++;
end_c--;
}
}
