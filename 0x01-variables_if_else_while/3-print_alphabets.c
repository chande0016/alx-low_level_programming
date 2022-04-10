#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success/Correct)
 */

int main(void)
{
char lowerCase;
char upperCase;
for (lowerCase = 'A' ; lowerCase <= 'Z' ; lowerCase++)
{
putchar(lowerCase);
}

for (upperCase = 'a' ; upperCase <= 'z' ; upperCase++)
{
putchar(upperCase);
}

putchar('\n');

return (0);

}
