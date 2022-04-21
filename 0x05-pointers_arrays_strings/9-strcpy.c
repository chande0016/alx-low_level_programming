#include "main.h"

/**
 * *_strcpy - copies string from pointer to pointer.
 *
 * @dest: destination
 * @src: source
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{

int j = -1;
do {
i++;
dest[j] = src[j];
}
while (src[j] != '\0');

return (dest);
}
