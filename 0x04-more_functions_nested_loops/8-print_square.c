#include "main.h"
/**
 * print_square - function that print
 * @size: size of both widith
 * Return: square
 */
int print_square(int size)
{
int co, ro;


if (size <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= size; co++)
_putchar('#');
{
for (ro = 2; ro <= size; ro++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
