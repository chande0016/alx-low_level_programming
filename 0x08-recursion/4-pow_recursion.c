#include "main.h"
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
else
{
return (pow(x, y));
}
}
