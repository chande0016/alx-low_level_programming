#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success/Correct)
 */

int main(void)
{
int numbers;

for (numbers = 48 ; numbers <= 57 ; numbers++)
{
putchar(numbers);

if (numbers == 57)
{
break;
}

putchar(',');
putchar('\n');
}

return (0);

}
