#include "main.h"
#include <math.h>
/**
 * _pow_recursion - function
 * @x: A number to be powered
 * @y: Square
 * Return: power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}

{
return (x * _pow_recursion(x, y - 1));
}
}
