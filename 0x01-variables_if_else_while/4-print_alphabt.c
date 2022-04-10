#include <stdio.h>
/**
 * main - Entry point
 *
 *Return Always 0 (Success/Correct)
 */

int main(void)
{
char lowerCase;

for (lowerCase = 'a' ; lowerCase <= 'z' ; lowerCase++)
{
if (lowerCase != 'q' && lowerCase != 'e')
{
putchar(lowerCase);
}

}

putchar('\n');


return (0);

}
