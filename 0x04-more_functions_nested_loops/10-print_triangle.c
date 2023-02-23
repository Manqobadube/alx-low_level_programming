#include "main.h"
/**
 * print_triangle - fucntion that print a triagle
 * @size: size of the triagle
 * Return: triagle of '#'s
 */
void print_triagle(int size)
{
int sp, ro, tr;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (ro = 0; ro <= (size - 1); ro++)
{
for (sp = 0; sp < (size - 1) - ro; sp++)
_putchar(' ');
}
_putchar('#');
}
}
}

