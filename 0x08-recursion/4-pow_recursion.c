#include "main.h"
/**
*_pow_recursion - returns the the value of x
*@x: integer
*@y: integer
*Return: 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-10);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));
else
return (1);
}
